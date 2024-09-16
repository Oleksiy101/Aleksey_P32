#pragma once
#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;



int lenstr(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}


char* replaceSymbol(const char* str, char oldSymbol, char newSymbol)
{
	char* newStr = new char[strlen(str) + 1];
	for (size_t i = 0; i < strlen(str) + 1; i++)
	{
		newStr[i] = (str[i] == oldSymbol) ? newSymbol : str[i];
	}
	return newStr;
}


int countWords(const char* str)
{
	int count = 0;
	bool f = false;
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ' and !f)
		{
			f = true;
			count++;
		}
		else if (str[i] == ' ')
		{
			f = false;
		}
	}
	return count;
}


char* delSymbol(const char* str, char symbol)
{
	int str_len = strlen(str) + 1;
	int count = 0;
	for (size_t i = 0; i < str_len; i++)
	{
		if (str[i] == symbol)
			count++;
	}
	char* new_str = new char[str_len - count];

	for (size_t i = 0, j = 0; i < str_len; i++)
	{
		if (str[i] != symbol)
		{
			new_str[j++] = str[i];
		}
	}
	return new_str;
}