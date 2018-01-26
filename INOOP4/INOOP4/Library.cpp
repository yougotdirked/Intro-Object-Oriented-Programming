

#include "Library.h"

void Library::returnBook(Book* b)
{
	book = b;
}

void Library::lendBook()
{
	book = NULL;
}

void Library::show()
{
	if (book != NULL)
	{
		cout << book->title << endl;
	}
	else
	{
		cout << "The library is empty!" << endl;
	}
}