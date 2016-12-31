// ConsoleApplication46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


void characters(char* string)
{
	int counter = 0;

	for (int i = 0; ; i++)
	{
		if (string[i] == '\0')
		{
			break;
		}
		else
		{
			counter++;
		}
	}

	cout << "number of characters:" << counter << endl;
	cout << "first character:" << string[0] << endl;
	cout << "middle character:" << string[counter / 2] << endl;
	cout << "last character:" << string[counter - 1] << endl;
}


int main()
{
	char string[50];
	cin.getline(string, 50);
	characters(string);
	return 0;
}