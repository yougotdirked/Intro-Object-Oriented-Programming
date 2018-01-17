// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
	int age;
	string name;

	int getAge();
	string getName();
};

class Teacher : public Person
{
public:
	Teacher(string n, int a);

	string className; //name of the class the teacher teaches
};

class Student : public Person
{
public:
	Student(string n, int a);

	int studentNr;
};

class INOOP2
{
public:
	void printPerson(Person p);

	void createPerson(string type, string name, int age);
};
