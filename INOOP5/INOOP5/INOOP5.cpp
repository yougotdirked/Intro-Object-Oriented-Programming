// INOOP5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	Library library1 = Library("Eerste Library");
	library1.addBook("Lib1,Boek1");
	library1.addBook("Lib1,Boek2");

	Library library2 = Library(library1);
	library2.addBook("Lib2,Boek1");
	
	library1.show();
	library2.show();
	
	cout << "do any input to exit" << endl;
	getchar();
}