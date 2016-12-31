// ConsoleApplication47.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void task5(char letter)
{
	for (char i = 'A'; i <= letter; i++)
	{
		for (char j = i; j >= 'A'; j--)
		{
			cout << j;
		}
		cout << endl;
	}
}


int main()
{
	char letter;
	cin >> letter;
	task5(letter);


	return 0;
}