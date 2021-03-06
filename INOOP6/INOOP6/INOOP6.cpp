// INOOP6.cpp : Defines the entry point for the console application.
//

#include "INOOP6.h"

string INOOP6::intertwine(string s1, string s2)
{
	string result;
	int i = 0;
	int j = 0;

	while (i <= s1.size())
	{
		if (s1[i] == '\n')
		{
			result.push_back('\n');

			if (s2[j] == '\n')
				j++;

			while (j <= s2.size())
			{
				if (s2[j] == '\n')
				{
					result.push_back('\n');
					i++;
					break;
				}
				else
				{
					result.push_back(s2[j]);
					j++;
				}
			}
		}
		result.push_back(s1[i]);
		i++;

		if (i == s1.size())
		{
			result = result + s2.substr(j, s2.size());
		}
	}
	return result;
}

int main()
{
	INOOP6 inoop6 = INOOP6();
	string memString;
	string inputStr1;
	string inputStr2;

	inoop6.output1.open("ioFiles/output1.txt");
	inoop6.output2.open("ioFiles/output2.txt");

	cout << "reading input1" << endl;
	inoop6.input1.open("ioFiles/input1.txt");
	if (!inoop6.input1)
	{
		cout << "no input1.txt found" << endl;
	}
	else
	{
		string input(istreambuf_iterator<char>(inoop6.input1), istreambuf_iterator<char>());
		inputStr1 = input;
		string temp(input.rbegin(), input.rend());
		memString = temp;
		cout << input.c_str() << endl;
	}

	cout << "reading input2" << endl;
	inoop6.input2.open("ioFiles/input2.txt");
	if (!inoop6.input1)
	{
		cout << "no input2.txt found" << endl;
	}
	else
	{
		string input(istreambuf_iterator<char>(inoop6.input2), istreambuf_iterator<char>());
		inputStr2 = input;
		cout << input.c_str() << endl;
	}
	
	cout << endl;
	cout << "OUTPUT:" << endl;
	cout << "1) backwards file written to ioFiles/output1" << endl;
	cout << memString.c_str() << endl;
	for (int i = 0; i < memString.size(); i++)
	{
		inoop6.output1.put(memString[i]);
	}
	cout << endl;
	cout << "2) intertwined file written to ioFiles/output2" << endl;
	string intertwined = inoop6.intertwine(inputStr1, inputStr2);
	cout << intertwined.c_str() << endl;
	for (int i = 0; i < intertwined.size(); i++)
	{
		inoop6.output2.put(intertwined[i]);
	}
	getchar();
}

