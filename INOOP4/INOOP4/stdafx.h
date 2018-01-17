// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string>

using namespace std;

class Book
{
public:
	Book(string t);

	string title;
};

class Library
{
public:
	Book* book;
	void returnBook(Book* b);

	void lendBook();

	void show();
};