// ConsoleApplication46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


void containsT(char* string)
{
	int counter = 0;
	bool contains = false;
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == 'T')
		{
			contains = true;
			break;
		}
		else
		{
			contains = false;
		}
		counter++;
	}
	if (contains)
	{
		cout << "T is found at position " << counter + 1;
	}
	else
	{
		cout << "T is not found in the string";
	}
}


int main()
{
	char string[50];
	cin.getline(string, 50);
	containsT(string);

	return 0;
}