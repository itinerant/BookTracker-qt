/********************************************************************************
** Form generated from reading ui file 'BookTracker.ui'
**
** Created: Sun Jul 27 23:31:04 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BOOKTRACKER_H
#define UI_BOOKTRACKER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout_Qt;
    QAction *actionAbout_BookTracker;
    QAction *actionJon;
    QAction *actionTibby;
    QAction *actionEmily;
    QAction *actionRhys;
    QAction *actionRebecca;
    QAction *actionHannah;
    QAction *actionJane;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QComboBox *addReader;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *addTitle;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *addAuthor;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QComboBox *addGenre;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QComboBox *addCategory;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_12;
    QComboBox *addDate;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *addPages;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QCheckBox *addAudiobook;
    QPushButton *addBook;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_15;
    QComboBox *filterReader;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *filterTitle;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *filterAuthor;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QComboBox *filterGenre;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QComboBox *filterCategory;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout;
    QComboBox *filterMonth;
    QComboBox *filterYear;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *filterAudiobookYes;
    QRadioButton *filterAudiobookNo;
    QRadioButton *filterAudiobookEither;
    QSpacerItem *horizontalSpacer;
    QTableWidget *bookTable;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(1355, 660);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8("../images/books.png")), QIcon::Normal, QIcon::Off);
    MainWindow->setWindowIcon(icon);
    MainWindow->setUnifiedTitleAndToolBarOnMac(false);
    actionQuit = new QAction(MainWindow);
    actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
    actionQuit->setMenuRole(QAction::QuitRole);
    actionAbout_Qt = new QAction(MainWindow);
    actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
    actionAbout_Qt->setMenuRole(QAction::AboutQtRole);
    actionAbout_BookTracker = new QAction(MainWindow);
    actionAbout_BookTracker->setObjectName(QString::fromUtf8("actionAbout_BookTracker"));
    actionAbout_BookTracker->setMenuRole(QAction::AboutRole);
    actionJon = new QAction(MainWindow);
    actionJon->setObjectName(QString::fromUtf8("actionJon"));
    actionJon->setCheckable(true);
    actionJon->setChecked(true);
    actionTibby = new QAction(MainWindow);
    actionTibby->setObjectName(QString::fromUtf8("actionTibby"));
    actionTibby->setCheckable(true);
    actionEmily = new QAction(MainWindow);
    actionEmily->setObjectName(QString::fromUtf8("actionEmily"));
    actionEmily->setCheckable(true);
    actionRhys = new QAction(MainWindow);
    actionRhys->setObjectName(QString::fromUtf8("actionRhys"));
    actionRhys->setCheckable(true);
    actionRebecca = new QAction(MainWindow);
    actionRebecca->setObjectName(QString::fromUtf8("actionRebecca"));
    actionRebecca->setCheckable(true);
    actionHannah = new QAction(MainWindow);
    actionHannah->setObjectName(QString::fromUtf8("actionHannah"));
    actionHannah->setCheckable(true);
    actionJane = new QAction(MainWindow);
    actionJane->setObjectName(QString::fromUtf8("actionJane"));
    actionJane->setCheckable(true);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setGeometry(QRect(0, 22, 1355, 616));
    verticalLayout_16 = new QVBoxLayout(centralwidget);
    verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
    groupBox = new QGroupBox(centralwidget);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    horizontalLayout_3 = new QHBoxLayout(groupBox);
    horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
    verticalLayout_5 = new QVBoxLayout();
    verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
    label_5 = new QLabel(groupBox);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    verticalLayout_5->addWidget(label_5);

    addReader = new QComboBox(groupBox);
    addReader->setObjectName(QString::fromUtf8("addReader"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(addReader->sizePolicy().hasHeightForWidth());
    addReader->setSizePolicy(sizePolicy);
    addReader->setMaximumSize(QSize(100, 16777215));

    verticalLayout_5->addWidget(addReader);


    horizontalLayout_3->addLayout(verticalLayout_5);

    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));

    verticalLayout->addWidget(label);

    addTitle = new QLineEdit(groupBox);
    addTitle->setObjectName(QString::fromUtf8("addTitle"));
    QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(addTitle->sizePolicy().hasHeightForWidth());
    addTitle->setSizePolicy(sizePolicy1);
    addTitle->setMinimumSize(QSize(220, 0));

    verticalLayout->addWidget(addTitle);


    horizontalLayout_3->addLayout(verticalLayout);

    verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    verticalLayout_2->addWidget(label_2);

    addAuthor = new QComboBox(groupBox);
    addAuthor->setObjectName(QString::fromUtf8("addAuthor"));
    sizePolicy1.setHeightForWidth(addAuthor->sizePolicy().hasHeightForWidth());
    addAuthor->setSizePolicy(sizePolicy1);
    addAuthor->setMinimumSize(QSize(200, 0));
    addAuthor->setEditable(true);

    verticalLayout_2->addWidget(addAuthor);


    horizontalLayout_3->addLayout(verticalLayout_2);

    verticalLayout_3 = new QVBoxLayout();
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    verticalLayout_3->addWidget(label_3);

    addGenre = new QComboBox(groupBox);
    addGenre->setObjectName(QString::fromUtf8("addGenre"));
    addGenre->setMaximumSize(QSize(120, 16777215));
    addGenre->setEditable(true);

    verticalLayout_3->addWidget(addGenre);


    horizontalLayout_3->addLayout(verticalLayout_3);

    verticalLayout_4 = new QVBoxLayout();
    verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    verticalLayout_4->addWidget(label_4);

    addCategory = new QComboBox(groupBox);
    addCategory->setObjectName(QString::fromUtf8("addCategory"));
    addCategory->setMaximumSize(QSize(120, 16777215));
    addCategory->setEditable(true);

    verticalLayout_4->addWidget(addCategory);


    horizontalLayout_3->addLayout(verticalLayout_4);

    verticalLayout_13 = new QVBoxLayout();
    verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
    label_12 = new QLabel(groupBox);
    label_12->setObjectName(QString::fromUtf8("label_12"));

    verticalLayout_13->addWidget(label_12);

    addDate = new QComboBox(groupBox);
    addDate->setObjectName(QString::fromUtf8("addDate"));
    addDate->setFocusPolicy(Qt::NoFocus);

    verticalLayout_13->addWidget(addDate);


    horizontalLayout_3->addLayout(verticalLayout_13);

    verticalLayout_6 = new QVBoxLayout();
    verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
    label_6 = new QLabel(groupBox);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    verticalLayout_6->addWidget(label_6);

    addPages = new QLineEdit(groupBox);
    addPages->setObjectName(QString::fromUtf8("addPages"));
    sizePolicy.setHeightForWidth(addPages->sizePolicy().hasHeightForWidth());
    addPages->setSizePolicy(sizePolicy);
    addPages->setMinimumSize(QSize(50, 0));
    addPages->setMaximumSize(QSize(50, 16777215));

    verticalLayout_6->addWidget(addPages);


    horizontalLayout_3->addLayout(verticalLayout_6);

    verticalLayout_7 = new QVBoxLayout();
    verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
    label_7 = new QLabel(groupBox);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    verticalLayout_7->addWidget(label_7);

    addAudiobook = new QCheckBox(groupBox);
    addAudiobook->setObjectName(QString::fromUtf8("addAudiobook"));

    verticalLayout_7->addWidget(addAudiobook);


    horizontalLayout_3->addLayout(verticalLayout_7);

    addBook = new QPushButton(groupBox);
    addBook->setObjectName(QString::fromUtf8("addBook"));

    horizontalLayout_3->addWidget(addBook);


    verticalLayout_16->addWidget(groupBox);

    groupBox_2 = new QGroupBox(centralwidget);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    horizontalLayout_4 = new QHBoxLayout(groupBox_2);
    horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
    verticalLayout_15 = new QVBoxLayout();
    verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
    label_15 = new QLabel(groupBox_2);
    label_15->setObjectName(QString::fromUtf8("label_15"));

    verticalLayout_15->addWidget(label_15);

    filterReader = new QComboBox(groupBox_2);
    filterReader->setObjectName(QString::fromUtf8("filterReader"));
    sizePolicy.setHeightForWidth(filterReader->sizePolicy().hasHeightForWidth());
    filterReader->setSizePolicy(sizePolicy);
    filterReader->setMaximumSize(QSize(100, 16777215));

    verticalLayout_15->addWidget(filterReader);


    horizontalLayout_4->addLayout(verticalLayout_15);

    verticalLayout_8 = new QVBoxLayout();
    verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
    label_8 = new QLabel(groupBox_2);
    label_8->setObjectName(QString::fromUtf8("label_8"));

    verticalLayout_8->addWidget(label_8);

    filterTitle = new QLineEdit(groupBox_2);
    filterTitle->setObjectName(QString::fromUtf8("filterTitle"));

    verticalLayout_8->addWidget(filterTitle);


    horizontalLayout_4->addLayout(verticalLayout_8);

    verticalLayout_9 = new QVBoxLayout();
    verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
    label_9 = new QLabel(groupBox_2);
    label_9->setObjectName(QString::fromUtf8("label_9"));

    verticalLayout_9->addWidget(label_9);

    filterAuthor = new QLineEdit(groupBox_2);
    filterAuthor->setObjectName(QString::fromUtf8("filterAuthor"));
    filterAuthor->setFocusPolicy(Qt::StrongFocus);
    filterAuthor->setReadOnly(false);

    verticalLayout_9->addWidget(filterAuthor);


    horizontalLayout_4->addLayout(verticalLayout_9);

    verticalLayout_10 = new QVBoxLayout();
    verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
    label_10 = new QLabel(groupBox_2);
    label_10->setObjectName(QString::fromUtf8("label_10"));

    verticalLayout_10->addWidget(label_10);

    filterGenre = new QComboBox(groupBox_2);
    filterGenre->setObjectName(QString::fromUtf8("filterGenre"));
    filterGenre->setEditable(false);

    verticalLayout_10->addWidget(filterGenre);


    horizontalLayout_4->addLayout(verticalLayout_10);

    verticalLayout_11 = new QVBoxLayout();
    verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
    label_11 = new QLabel(groupBox_2);
    label_11->setObjectName(QString::fromUtf8("label_11"));

    verticalLayout_11->addWidget(label_11);

    filterCategory = new QComboBox(groupBox_2);
    filterCategory->setObjectName(QString::fromUtf8("filterCategory"));
    filterCategory->setEditable(false);

    verticalLayout_11->addWidget(filterCategory);


    horizontalLayout_4->addLayout(verticalLayout_11);

    verticalLayout_12 = new QVBoxLayout();
    verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
    label_13 = new QLabel(groupBox_2);
    label_13->setObjectName(QString::fromUtf8("label_13"));

    verticalLayout_12->addWidget(label_13);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    filterMonth = new QComboBox(groupBox_2);
    filterMonth->setObjectName(QString::fromUtf8("filterMonth"));
    sizePolicy.setHeightForWidth(filterMonth->sizePolicy().hasHeightForWidth());
    filterMonth->setSizePolicy(sizePolicy);
    filterMonth->setMaximumSize(QSize(65, 16777215));
    filterMonth->setFocusPolicy(Qt::NoFocus);

    horizontalLayout->addWidget(filterMonth);

    filterYear = new QComboBox(groupBox_2);
    filterYear->setObjectName(QString::fromUtf8("filterYear"));
    sizePolicy.setHeightForWidth(filterYear->sizePolicy().hasHeightForWidth());
    filterYear->setSizePolicy(sizePolicy);
    filterYear->setMaximumSize(QSize(80, 16777215));
    filterYear->setFocusPolicy(Qt::NoFocus);

    horizontalLayout->addWidget(filterYear);


    verticalLayout_12->addLayout(horizontalLayout);


    horizontalLayout_4->addLayout(verticalLayout_12);

    verticalLayout_14 = new QVBoxLayout();
    verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
    label_14 = new QLabel(groupBox_2);
    label_14->setObjectName(QString::fromUtf8("label_14"));

    verticalLayout_14->addWidget(label_14);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    filterAudiobookYes = new QRadioButton(groupBox_2);
    filterAudiobookYes->setObjectName(QString::fromUtf8("filterAudiobookYes"));
    filterAudiobookYes->setFocusPolicy(Qt::NoFocus);

    horizontalLayout_2->addWidget(filterAudiobookYes);

    filterAudiobookNo = new QRadioButton(groupBox_2);
    filterAudiobookNo->setObjectName(QString::fromUtf8("filterAudiobookNo"));
    filterAudiobookNo->setFocusPolicy(Qt::NoFocus);

    horizontalLayout_2->addWidget(filterAudiobookNo);

    filterAudiobookEither = new QRadioButton(groupBox_2);
    filterAudiobookEither->setObjectName(QString::fromUtf8("filterAudiobookEither"));
    filterAudiobookEither->setFocusPolicy(Qt::NoFocus);
    filterAudiobookEither->setChecked(true);

    horizontalLayout_2->addWidget(filterAudiobookEither);


    verticalLayout_14->addLayout(horizontalLayout_2);


    horizontalLayout_4->addLayout(verticalLayout_14);

    horizontalSpacer = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_4->addItem(horizontalSpacer);


    verticalLayout_16->addWidget(groupBox_2);

    bookTable = new QTableWidget(centralwidget);
    if (bookTable->columnCount() < 8)
        bookTable->setColumnCount(8);
    QTableWidgetItem *__colItem = new QTableWidgetItem();
    bookTable->setHorizontalHeaderItem(0, __colItem);
    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    bookTable->setHorizontalHeaderItem(1, __colItem1);
    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    bookTable->setHorizontalHeaderItem(2, __colItem2);
    QTableWidgetItem *__colItem3 = new QTableWidgetItem();
    bookTable->setHorizontalHeaderItem(3, __colItem3);
    QTableWidgetItem *__colItem4 = new QTableWidgetItem();
    bookTable->setHorizontalHeaderItem(4, __colItem4);
    QTableWidgetItem *__colItem5 = new QTableWidgetItem();
    bookTable->setHorizontalHeaderItem(5, __colItem5);
    QTableWidgetItem *__colItem6 = new QTableWidgetItem();
    bookTable->setHorizontalHeaderItem(6, __colItem6);
    QTableWidgetItem *__colItem7 = new QTableWidgetItem();
    bookTable->setHorizontalHeaderItem(7, __colItem7);
    bookTable->setObjectName(QString::fromUtf8("bookTable"));
    bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    bookTable->setAlternatingRowColors(true);
    bookTable->setSelectionMode(QAbstractItemView::NoSelection);
    bookTable->setSelectionBehavior(QAbstractItemView::SelectItems);
    bookTable->setSortingEnabled(true);
    bookTable->setColumnCount(8);

    verticalLayout_16->addWidget(bookTable);

    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 1355, 22));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    statusbar->setGeometry(QRect(0, 638, 1355, 22));
    MainWindow->setStatusBar(statusbar);

    menubar->addAction(menuFile->menuAction());
    menuFile->addAction(actionAbout_Qt);
    menuFile->addAction(actionAbout_BookTracker);
    menuFile->addAction(actionQuit);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BookTracker", 0, QApplication::UnicodeUTF8));
    actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
    actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0, QApplication::UnicodeUTF8));
    actionAbout_BookTracker->setText(QApplication::translate("MainWindow", "About BookTracker", 0, QApplication::UnicodeUTF8));
    actionJon->setText(QApplication::translate("MainWindow", "Jon", 0, QApplication::UnicodeUTF8));
    actionTibby->setText(QApplication::translate("MainWindow", "Tibby", 0, QApplication::UnicodeUTF8));
    actionEmily->setText(QApplication::translate("MainWindow", "Emily", 0, QApplication::UnicodeUTF8));
    actionRhys->setText(QApplication::translate("MainWindow", "Rhys", 0, QApplication::UnicodeUTF8));
    actionRebecca->setText(QApplication::translate("MainWindow", "Rebecca", 0, QApplication::UnicodeUTF8));
    actionHannah->setText(QApplication::translate("MainWindow", "Hannah", 0, QApplication::UnicodeUTF8));
    actionJane->setText(QApplication::translate("MainWindow", "Jane", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("MainWindow", "Add Book", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("MainWindow", "Reader", 0, QApplication::UnicodeUTF8));
    addReader->insertItems(0, QStringList()
     << QString()
     << QApplication::translate("MainWindow", "Jon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Tibby", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Emily", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Rhys", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Rebecca", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Hannah", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Jane", 0, QApplication::UnicodeUTF8)
    );
    label->setText(QApplication::translate("MainWindow", "Title", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("MainWindow", "Author", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("MainWindow", "Genre", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("MainWindow", "Category", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("MainWindow", "Date", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("MainWindow", "Pages", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("MainWindow", "Audiobook", 0, QApplication::UnicodeUTF8));
    addAudiobook->setText(QString());
    addBook->setText(QApplication::translate("MainWindow", "Add Book", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("MainWindow", "Filter Books", 0, QApplication::UnicodeUTF8));
    label_15->setText(QApplication::translate("MainWindow", "Reader", 0, QApplication::UnicodeUTF8));
    filterReader->insertItems(0, QStringList()
     << QString()
     << QApplication::translate("MainWindow", "Jon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Tibby", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Emily", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Rhys", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Rebecca", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Hannah", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Jane", 0, QApplication::UnicodeUTF8)
    );
    label_8->setText(QApplication::translate("MainWindow", "Title", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("MainWindow", "Author", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("MainWindow", "Genre", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("MainWindow", "Category", 0, QApplication::UnicodeUTF8));
    label_13->setText(QApplication::translate("MainWindow", "Date", 0, QApplication::UnicodeUTF8));
    filterMonth->insertItems(0, QStringList()
     << QString()
     << QApplication::translate("MainWindow", "Jan", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Feb", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Mar", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Apr", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "May", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Jun", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Jul", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Aug", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Sep", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Oct", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Nov", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "Dec", 0, QApplication::UnicodeUTF8)
    );
    filterYear->insertItems(0, QStringList()
     << QString()
     << QApplication::translate("MainWindow", "2003", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "2004", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "2005", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "2006", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "2007", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "2008", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "2009", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindow", "2010", 0, QApplication::UnicodeUTF8)
    );
    label_14->setText(QApplication::translate("MainWindow", "Audiobook", 0, QApplication::UnicodeUTF8));
    filterAudiobookYes->setText(QApplication::translate("MainWindow", "Yes", 0, QApplication::UnicodeUTF8));
    filterAudiobookNo->setText(QApplication::translate("MainWindow", "No", 0, QApplication::UnicodeUTF8));
    filterAudiobookEither->setText(QApplication::translate("MainWindow", "Either", 0, QApplication::UnicodeUTF8));
    bookTable->horizontalHeaderItem(0)->setText(QApplication::translate("MainWindow", "Reader", 0, QApplication::UnicodeUTF8));
    bookTable->horizontalHeaderItem(1)->setText(QApplication::translate("MainWindow", "Title", 0, QApplication::UnicodeUTF8));
    bookTable->horizontalHeaderItem(2)->setText(QApplication::translate("MainWindow", "Author", 0, QApplication::UnicodeUTF8));
    bookTable->horizontalHeaderItem(3)->setText(QApplication::translate("MainWindow", "Genre", 0, QApplication::UnicodeUTF8));
    bookTable->horizontalHeaderItem(4)->setText(QApplication::translate("MainWindow", "Categories", 0, QApplication::UnicodeUTF8));
    bookTable->horizontalHeaderItem(5)->setText(QApplication::translate("MainWindow", "Date", 0, QApplication::UnicodeUTF8));
    bookTable->horizontalHeaderItem(6)->setText(QApplication::translate("MainWindow", "Pages", 0, QApplication::UnicodeUTF8));
    bookTable->horizontalHeaderItem(7)->setText(QApplication::translate("MainWindow", "Audiobook", 0, QApplication::UnicodeUTF8));
    menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKTRACKER_H
