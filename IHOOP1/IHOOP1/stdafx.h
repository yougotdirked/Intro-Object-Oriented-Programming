// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

//Modelleer het rooster

#include <vector>
#include <string>
#include <array>

using namespace std;

class Date
{
	//dates
};

class Teacher
{
	//Teacher takes care of the teachers
public:
	string firstname;
	string lastname;
	int teacherNr;
private:
};

class Student
{
public:
	string firstname; //first name
	string lastname; //last name
	int studentNr; //student number
	int ec; //current study points of the student

private:
	vector<Class*> classes; //classes the student was or is enrolled in
};

class Class
{
	//class should contain the class' teacher and students, as well as how many points it rewards.
public:
	int ec; //study point reward
	Teacher t; //the class' main teacher
	vector<Student*> students; //pointers to all the students in the class

	Student* getStudents(); //returns the students in the class;

	void setTeacher(Teacher t); //assign a teacher to the class
	void addStudent(Student s); //add one of the students to the class
private:
};

class Display
{
	//display should take care of the display of the schedule
public:
	void displayTeacher(); //displays teacher name and associated info
	void displayClass(); //displays class name and associated info
	void displayStudent(); //displays a student and associated info
};

class Schedule
{
	//schedule
	void placeInSchedule(Schedule s, Class c, Date d, int starttime, int endtime);  //plans class c in the schedule on date d from starttime till endtime

	void getDateTime(); //get the current date and time

	void updateDateTime(); //update the datetime to current date time
};

