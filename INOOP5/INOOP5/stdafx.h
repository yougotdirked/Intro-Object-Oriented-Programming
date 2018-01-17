// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Book
{
public:
	string title;

	Book(string t);
	Book();
};

class Library
{
public:
	Library(string s);
	Library();
	Library(const Library& lib);
	~Library();

	vector<Book*> books;
	string libraryName;

	void addBook(string t);
	void show();
};
