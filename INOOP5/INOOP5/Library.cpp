#include "Library.h"

Library::Library(string s)
{
	libraryName = s;
}

Library::Library()
{
	libraryName = "";
}

Library::~Library()
{
	for (int i = 0; i < books.size(); i++)
	{
		delete books[i];
	}
}

Library::Library(const Library& lib)
{
	libraryName = lib.libraryName;
	for (int i = 0; i < lib.books.size(); i++)
	{
		addBook(lib.books[i]->title);
	}

}

void Library::addBook(string t)
{
	books.push_back(new Book(t));
}

void Library::show()
{
	cout << libraryName << endl;
	for (int i = 0; i < books.size(); i++)
	{
		cout << books[i]->title << endl;
	}
}