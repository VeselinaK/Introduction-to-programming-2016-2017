// ConsoleApplication47.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void task7(char* string)
{
	int counterNames = 0;
	int counterBreeds = 0;
	int counterSpaces = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == ' ')
		{
			counterSpaces++;
		}
	}
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'A'&& string[i] <= 'Z')
		{
			counterNames++;
		}
	}
	counterBreeds = (counterSpaces + 1) - counterNames;
	cout << "breeds / names = " << counterBreeds << " / " << counterNames;
}


int main()
{
	char dogs[100];
	cin.getline(dogs, 100);
	task7(dogs);


	return 0;
}
