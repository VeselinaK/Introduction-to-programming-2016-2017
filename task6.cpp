// ConsoleApplication47.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


void uniqueElements(char* string1, char* stringResult)
{
	for (int i = 0; string1[i] != '\0'; i++)
	{
		if (string1[i] >= 65 && string1[i] <= 90)
		{
			string1[i] = string1[i] + 32;
		}
	}
	for (int i = 0; string1[i] != '\0'; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (string1[i] != string1[j])
			{
				stringResult[i] = string1[i];
			}
		}
	}
	for (int i = 0; stringResult[i] != '\0'; i++)
	{
		cout << stringResult[i];
	}
}


int main()
{
	char string1[100], stringResult[100];
	cin.getline(string1, 100);
	uniqueElements(string1, stringResult);


	return 0;
}