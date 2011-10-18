#ifndef BOOKTRACKER_H
#define BOOKTRACKER_H
//
#include <QMainWindow>
#include <QtSql>
#include "ui_BookTracker.h"
#include "Book.h"

class BookTracker : public QMainWindow, public Ui::MainWindow
{
Q_OBJECT
public:
	BookTracker( QWidget * parent = 0, Qt::WFlags f = 0 );
	
private slots:
	void clickedQuit();
	void closeEvent(QCloseEvent*);
	void aboutApp();
	
	void clickedAdd();
	void filterBooks();
	
private:
	// main setup
	void connectObjects();
	void initGUI();
	void setDateData();
	
	// book data
	void setCollectionData();
	void getBooks();
	void invalidBook();
	
	// totals
	QString getPageCount();
	QString getAudiobookCount();
	
	QList<Book *> allBooks;
	QList<Book *> filteredBooks;
	QSqlDatabase db;
	QActionGroup *readerGroup;
};
#endif // BOOKTRACKER_H
