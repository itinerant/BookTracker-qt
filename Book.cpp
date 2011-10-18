#include "Book.h"

Book::Book()
{
		id = 0;
		reader = "";
		title = "";
		author = "";
		genre = "";
		category = "";
		date = "";
		pages = 0;
		audiobook = 0;  
}

QString Book::pageString()
{
	return QString::number(pages);
}

QString Book::audiobookString()
{
	if(audiobook)
		return "Yes";
	return "";
}
