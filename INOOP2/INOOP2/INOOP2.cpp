// INOOP2.cpp : Defines the entry point for the console application.
//

#include "INOOP2.h"
#include "Teacher.h"
#include "Student.h"

void INOOP2::printPerson(Person p)
{
	cout << "name: " << p.getName() << endl;
	cout << "age: " << p.getAge() << endl;
}

void INOOP2::createPerson(string type, string name, int age)
{
	Person* p;

	if (type == "teacher")
	{
		p = new Teacher(name, age);
	}

	if (type == "student")
	{
		p = new Student(name, age);
	}
}


int main()
{
	return 0;
}

