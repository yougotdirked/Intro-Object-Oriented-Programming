// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <fstream>

using namespace std;

class INOOP6
{
public:
	ifstream input1;
	ifstream input2;

	ofstream output1;
	ofstream output2;

	string intertwine(string s1, string s2);
};