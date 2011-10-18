#include "BookTracker.h"

#include <QMessageBox>
#include <QCloseEvent>

#include <QComboBox>
#include <QLineEdit>
#include <QTableWidget>
#include <QDate>
#include <QTextStream>
#include <QFile>
#include <QStringList>
#include <QLocale>
#include <QFileDialog>
#include <QDir>
#include <QDebug>

BookTracker::BookTracker( QWidget * parent, Qt::WFlags f) 
	: QMainWindow(parent, f)
{
	setupUi(this);
	
	// database
	db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName( "BookTraker.sqlite");
	
	// connect objects
	connectObjects();
	
	// set initial data
	setDateData();
	setCollectionData();
	getBooks();
	filterBooks();
}

void BookTracker::connectObjects()
{
	// connect menu items
	connect(actionQuit, SIGNAL(triggered()), this, SLOT(clickedQuit()));
	connect(actionAbout_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
	connect(actionAbout_BookTracker, SIGNAL(triggered()), this, SLOT(aboutApp()));
	
	// connect controls
	connect(addBook, SIGNAL(clicked()), this, SLOT(clickedAdd()));
	connect(filterReader, SIGNAL(currentIndexChanged(const QString &)), this, SLOT(filterBooks()));
	connect(filterTitle, SIGNAL(textChanged(const QString &)), this, SLOT(filterBooks()));
	connect(filterAuthor, SIGNAL(textChanged(const QString &)), this, SLOT(filterBooks()));
	connect(filterGenre, SIGNAL(currentIndexChanged(const QString &)), this, SLOT(filterBooks()));
	connect(filterCategory, SIGNAL(currentIndexChanged(const QString &)), this, SLOT(filterBooks()));
	connect(filterMonth, SIGNAL(currentIndexChanged(const QString &)), this, SLOT(filterBooks()));
	connect(filterYear, SIGNAL(currentIndexChanged(const QString &)), this, SLOT(filterBooks()));
	connect(filterAudiobookYes, SIGNAL(clicked()), this, SLOT(filterBooks()));
	connect(filterAudiobookNo, SIGNAL(clicked()), this, SLOT(filterBooks()));
	connect(filterAudiobookEither, SIGNAL(clicked()), this, SLOT(filterBooks()));
}

void BookTracker::clickedQuit()
{
	QApplication::quit();
}

void BookTracker::closeEvent( QCloseEvent* e)
{
	e->ignore();
	clickedQuit();	
}

void BookTracker::aboutApp()
{
    QMessageBox::about(this, "BookTracker", "An application to track books read (or listened to) by individual members of a family.");
}

void BookTracker::clickedAdd()
{
	// check for required fields
	if((addReader->currentText() == "") || (addTitle->text() == "") || (addAuthor->currentText() == "") || (addGenre->currentText() == "") 
		|| ((addPages->text() == "") && (!addAudiobook->isChecked())))
	{
		invalidBook();
		return;
	}
	
	// add book to database
	// open database
	if(db.open())
	{
		QString q = "insert into books (id, reader, title, author, genre, category, date, pages, audiobook) values ("
			+ QString::number(allBooks.size()+1) + ", '" + addReader->currentText() + "', '" + addTitle->text() + "', '" 
			+ addAuthor->currentText() + "', '" + addGenre->currentText() + "', '" + addCategory->currentText() + "', '"
			+ addDate->currentText() + "', '" + addPages->text() + "', " + QString::number(addAudiobook->checkState()) + ")";
		QSqlQuery query;
		query.exec(q);
	} 
	else
	{
		QMessageBox::critical(this, "", "Failed to add book to database");
		return;
	}
	
	// clear fields
	addTitle->clear();
	addAuthor->setCurrentIndex(0);
	addGenre->setCurrentIndex(0);
	addCategory->setCurrentIndex(0);
	addDate->setCurrentIndex(1);
	addPages->clear();
	addAudiobook->setChecked(false);
	addTitle->setFocus();
		
	// reset data
	setCollectionData();
	getBooks();
	filterBooks();
}

void BookTracker::invalidBook() 
{
	QMessageBox::critical(this, "Invalid Book", "The following fields are required:\nReader\nTitle\nAuthor\nGenre\n\nand at least one of:\nPages\nAudiobook");
}

void BookTracker::setDateData()
{
	QDate today = QDate::currentDate();
	today = today.addMonths(-1);
	addDate->addItem(today.toString("MMM yyyy"));
	today = today.addMonths(1);
	addDate->addItem(today.toString("MMM yyyy"));
	addDate->setCurrentIndex(1);
	filterYear->setCurrentIndex(filterYear->findText(today.toString("yyyy")));
}

void BookTracker::setCollectionData()
{
	// clear controls
	addAuthor->clear();
	addGenre->clear();
	filterGenre->clear();
	addCategory->clear();
	filterCategory->clear();
	
	// open database
	if(db.open())
	{
		// get authors
		addAuthor->addItem("");
		QSqlQuery query("SELECT distinct author FROM books order by author");
		while (query.next()) {
			addAuthor->addItem(query.value(0).toString());
	     }
		// get genres
		addGenre->addItem("");
		filterGenre->addItem("");
		query.exec("SELECT distinct genre FROM books order by genre");
		while (query.next()) {
			addGenre->addItem(query.value(0).toString());
			filterGenre->addItem(query.value(0).toString());
	 	}
		// get categories
		query.exec("select distinct category from books");
		while (query.next()) {
			addCategory->addItem(query.value(0).toString());
		 	filterCategory->addItem(query.value(0).toString());
	 	}	 	
	 	
	 	// close database
		db.close();
	}
}

void BookTracker::getBooks()
{
	// clear list
	allBooks.clear();
	
	// open database
	if(db.open())
	{
		// get books
		QSqlQuery query("SELECT * FROM books");
		while (query.next()) {
			Book *book = new Book();
			book->id = query.value(0).toInt();
			book->reader = query.value(1).toString();
			book->title = query.value(2).toString();
			book->author = query.value(3).toString();
			book->genre = query.value(4).toString();
			book->category = query.value(5).toString();
			book->date = query.value(6).toString();
			book->pages = query.value(7).toInt();
			book->audiobook = query.value(8).toInt();
			allBooks.append(book);
	     }
		// close database
		db.close();
	}
}

void BookTracker::filterBooks()
{
	// clear lists
	filteredBooks.clear();
	bookTable->setSortingEnabled(false);
	bookTable->clear();
	bookTable->setRowCount(0);
	
	// set headers
	QStringList headers;
	headers << "Reader" << "Title" << "Author" << "Genre" << "Category" << "Date" << "Pages" << "Audiobook";
	bookTable->setHorizontalHeaderLabels(headers);
	
	// find matching books
	for(int i=0; i<allBooks.size(); i++)
	{
		// find filter matches
		bool match=false, r=false, t=false, a=false, g=false, c=false, m=false, y=false, ab=false;
		if(filterReader->currentText() == "") { r=true; }
		else if(allBooks.at(i)->reader == filterReader->currentText()) { r=true; }
		if(filterTitle->text() == "") { t=true; }
		else if(allBooks.at(i)->title.contains(filterTitle->text(), Qt::CaseInsensitive)) { t=true; }
		if(filterAuthor->text() == "") { a=true; }
		else if(allBooks.at(i)->author.contains(filterAuthor->text(), Qt::CaseInsensitive)) { a=true; }
		if(filterGenre->currentText() == "") { g=true; }
		else if(allBooks.at(i)->genre.contains(filterGenre->currentText())) { g=true; }
		if(filterCategory->currentText() == "") { c=true; }
		else if(allBooks.at(i)->category.contains(filterCategory->currentText())) { c=true; }
		if(filterMonth->currentText() == "") { m=true; }
		else if(allBooks.at(i)->date.contains(filterMonth->currentText())) { m=true; }
		if(filterYear->currentText() == "") { y=true; }
		else if(allBooks.at(i)->date.contains(filterYear->currentText())) { y=true; }
		if(filterAudiobookYes->isChecked()) { if(allBooks.at(i)->audiobook == 2) ab=true; }
		if(filterAudiobookNo->isChecked()) { if(allBooks.at(i)->audiobook == 0) ab=true; }
		if(filterAudiobookEither->isChecked()) { ab=true; }
		
		// load item into filtered list
		match = r & t & a & g & c & m & y & ab;
		if(match)
		{
			filteredBooks.append(allBooks.at(i));
		}
		//qDebug() << i << ": " << allBooks.at(i)->title;
	}
	
	// set books in table
	bookTable->setRowCount(filteredBooks.size());
	for(int i=0; i<filteredBooks.size(); i++)
	{
		QTableWidgetItem *item = new QTableWidgetItem(filteredBooks.at(i)->reader);
		bookTable->setItem(i, 0, item);
		item = new QTableWidgetItem(filteredBooks.at(i)->title);
		bookTable->setItem(i, 1, item);
		item = new QTableWidgetItem(filteredBooks.at(i)->author);
		bookTable->setItem(i, 2, item);
		item = new QTableWidgetItem(filteredBooks.at(i)->genre);
		bookTable->setItem(i, 3, item);		
		item = new QTableWidgetItem(filteredBooks.at(i)->category);
		bookTable->setItem(i, 4, item);
		item = new QTableWidgetItem(filteredBooks.at(i)->date);
		bookTable->setItem(i, 5, item);
		item = new QTableWidgetItem(filteredBooks.at(i)->pageString());
		item->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
		bookTable->setItem(i, 6, item);
		item = new QTableWidgetItem(filteredBooks.at(i)->audiobookString());
		item->setTextAlignment(Qt::AlignCenter);
		bookTable->setItem(i, 7, item);
	}
	
	// set column sizes
	bookTable->setColumnWidth(0, 80); // Reader
	bookTable->setColumnWidth(1, 410); // Title
	bookTable->setColumnWidth(2, 210); // Author
	bookTable->setColumnWidth(3, 160); // Genre
	bookTable->setColumnWidth(4, 160); // Category
	bookTable->setColumnWidth(5, 100); // Date
	bookTable->setColumnWidth(6, 80); // Pages
	bookTable->setColumnWidth(7, 80); // Audiobook
	
	// set status message
	statusBar()->showMessage("Books: " + QString::number(bookTable->rowCount()) 
		+ "               Pages: " + getPageCount() 
		+ "               Audiobooks: " + getAudiobookCount());
}

QString BookTracker::getPageCount()
{
	bool ok;
	int pages = 0;
	for(int i=0; i<bookTable->rowCount(); i++)
	{
		pages += bookTable->item(i, 6)->text().toInt(&ok);
	}
	return QString("%L1").arg(pages);
}

QString BookTracker::getAudiobookCount()
{
	int audiobooks = 0;
	for(int i=0; i<bookTable->rowCount(); i++)
	{
		if(bookTable->item(i, 7)->text() != "")
			audiobooks++;
	}
	return QString("%L1").arg(audiobooks);
}
