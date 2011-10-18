#ifndef BOOK_H
#define BOOK_H

#include <QString>

class Book
{
	public:
		Book();
		QString pageString();
		QString audiobookString();
			
		int id;
		QString reader;
		QString title;
		QString author;
		QString genre;
		QString category;
		QString date;
		int pages;
		int audiobook;
};

#endif // BOOK_H
