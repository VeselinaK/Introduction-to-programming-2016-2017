// ConsoleApplication46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


void task2(char* string, char character)
{
	int counter = 0;
	bool print = false;
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == character)
		{
			print = true;
			cout << "the character " << character << " is found in the string at position " << counter + 1 << endl;
			break;
		}
		counter++;
	}
	if (print)
	{
		for (int i = counter + 1; string[i] != '\0'; i++)
		{
			cout << string[i];
		}
		cout << endl;
	}
	else
	{
		cout << "the character is not found in the string";
	}
}


int main()
{
	char string[50];
	char character;
	cin.getline(string, 50);
	cin >> character;
	task2(string, character);

	return 0;
}