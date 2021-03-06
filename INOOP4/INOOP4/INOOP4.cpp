// INOOP4.cpp : Defines the entry point for the console application.
//

#include "INOOP4.h"
#include "Library.h"
#include "Book.h"

using namespace std;

int main()
{
	Library library;
	Book book("The Necronomicon");

	library.book = &book;

	cout << "Showing Library.." << endl;
	library.show();
	cout << endl;

	cout << "Lending book from Library.." << endl;
	library.lendBook();
	cout << endl;

	cout << "Showing Library.." << endl;
	library.show();
	cout << endl;

	cout << "Returning Book to Library.." << endl;
	library.returnBook(&book);
	cout << endl;

	cout << "Showing Library.." << endl;
	library.show();
	cout << endl;

	cout << "Enter any keys to exit" << endl;
	getchar();
}

