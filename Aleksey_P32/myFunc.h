#pragma once
#include<iostream>
#include<iomanip>
#include<Windows.h>

//#include"MyStruct.h"

using namespace std;

enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//âèâîäèòü ë³í³þ ³ç ç³ðî÷îê
void starLine(int count = 10, char symbol = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}


//int Sum(int a, int b, int c = 0, int d = 0)
//{
//	return a + b + c + d;
//}

template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype (a + b)
{
	return a + b + c;
}

float avg3(int a, int b, int c)
{
	return (a + b + c) / 3.f;
}


int Inc(int a)
{
	a++;
	return a;
}


bool isEven(int n)
{
	return n % 2 == 0;
}

bool big10(int a)
{
	return a > 10;
}

template<class T>
void printArray(T* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void setArray(T* arr, int size, int minValue = 0, int maxValue = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}


//void setArray(Point* arr, int size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i].x = rand() % 10;
//		arr[i].y = rand() % 10;
//		arr[i].name = 'A' + i;
//	}
//}

template<class T>
int findElemArray(T* arr, int size, int key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

template<class T>
void reverseArray(T arr[], int size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}
}

template<class T>
T maxArray(T arr[], int size)
{
	T max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

template<class T>
bool asc(T a, T b)
{
	return a > b;
}

template<class T>
bool desc(T a, T b)
{
	return a < b;
}


bool EvenFirst(int a, int b)
{
	if (a % 2 == 0 && b % 2 == 1)
		return false;
	if (a % 2 == 1 && b % 2 == 0)
		return true;
	return asc(a, b);
}

int SumNumber(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;;
		n /= 10;
	}
	return sum;
}

bool FromSumNumber(int a, int b)
{
	int sumA = SumNumber(a);
	int sumB = SumNumber(b);
	if (sumA == sumB)
		return asc(a, b);
	return asc(sumA, sumB);
}

template<class T>
void bubbleSort(T* arr, int size, bool (*method)(T a, T b) = asc)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (method(arr[j], arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}



void initField(char field[][3], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			field[i][j] = ' ';
		}
	}
}

void printField(char field[][3], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << setw(2) << field[i][j];
			if (j < size - 1)
			{
				cout << " |";
			}
		}
		cout << endl;
		if (i < size - 1)
		{
			for (size_t k = 0; k < size * 3 + size - 1; k++)
			{
				cout << "-";
			}
			cout << endl;

		}
	}
}

void moveUser(char field[][3], int size)
{
	cout << endl;
	do
	{
		cout << "Âàø âèá³ð (1-" << size * size << ") : ";
		int choice;
		cin >> choice;
		choice--;
		if (field[choice / size][choice % size] == ' ')
		{
			field[choice / size][choice % size] = 'X';
			return;
		}
	} while (true);
}

void moveComp(char field[][3], int size)
{
	cout << endl;
	do
	{
		int choice = rand() % (size * size);
		if (field[choice / size][choice % size] == ' ')
		{
			field[choice / size][choice % size] = '0';
			return;
		}
	} while (true);
}

char isWinner(char field[][3], int size) // X - User, 0 - Comp, " " - Continue
{
	for (size_t i = 0; i < size; i++)
	{
		bool flag = true;
		for (size_t j = 0; j < size - 1; j++)
		{
			if (field[i][j] != field[i][j + 1] || field[i][j] == ' ')
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			return field[i][0];
		}
	}

	for (size_t j = 0; j < size; j++)
	{
		bool flag = true;
		for (size_t i = 0; i < size - 1; i++)
		{
			if (field[i][j] != field[i + 1][j] || field[i][j] == ' ')
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			return field[0][j];
		}
	}

	bool flag = true;
	for (size_t i = 0; i < size - 1; i++)
	{
		if (field[i][i] != field[i + 1][i + 1] || field[i][i] == ' ')
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		return field[0][0];
	}

	flag = true;
	for (size_t i = 0; i < size - 1; i++)
	{
		if (field[i][size - 1 - i] != field[i + 1][size - 1 - i + 1] || field[i][size - 1 - i] == ' ')
		{
			flag = false;
			break;
		}

	}
	if (flag)
	{
		return field[0][size - 1];
	}


	return ' ';
}



template<class T>
void addValueArray(T*& arr, int& size, T newValue)
{
	T* t = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		t[i] = arr[i];
	}
	t[size] = newValue;
	delete[] arr;

	size++;
	arr = t;
}

template<class T>
void delValueArray(T*& arr, int& size)
{
	T* t = new T[size - 1];
	for (size_t i = 0; i < size - 1; i++)
	{
		t[i] = arr[i];
	}
	delete[] arr;
	size--;
	arr = t;
}


void my_swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;

	cout << "In func swap" << endl;
	cout << a << endl;
	cout << b << endl;
}

template<class T>
void addValueArrayPos(T*& arr, int& size, T newValue, int pos)
{

}

void rozpodil(int* arr, int size, int*& neg, int& sizeNeg, int*& pos, int& sizePos, int*& zero, int& sizeZero)
{

}

void func(const int* a)
{
	//*a = 99;
}


template<class T>
void createArr2D(T**& p, int row, int col)
{
	p = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		p[i] = new T[col];
	}
}


template<class T>
void setArr2D(T** p, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			p[i][j] = rand() % 10;
		}
	}
}


template<class T>
void printArr2D(T** p, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}

template<class T>
void deleteArr2D(T**& p, int row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete[] p[i];
	}
	delete[] p;
	p = nullptr;
}


template<class T>
void addRowArr2D(T**& p, int& row, int col, T* newRow = nullptr)
{
	int count = col;
	if (newRow != nullptr)
	{
		count = _msize(newRow) / sizeof(T);
	}

	if (col != count)
		return;

	T** newArr = new T * [row + 1];
	for (size_t i = 0; i < row; i++)
	{
		newArr[i] = p[i];
	}

	newArr[row] = new T[col]{ 0 };
	if (newRow != nullptr)
	{
		for (size_t i = 0; i < col; i++)
		{
			newArr[row][i] = newRow[i];
		}
	}
	row++;
	delete[]p;
	p = newArr;
}

template<class T>
void addRowPosArr2D(T**& p, int& row, int col, int pos, T* newRow = nullptr)
{

}

template<class T>
void delRowPosArr2D(T**& p, int& row, int col, int pos)
{

}


template <class T>
void deleteRowMatrix(T**& arr, int& rows)
{
	T** newArr = new T * [rows - 1];
	for (size_t i = 0; i < rows - 1; i++)
	{
		newArr[i] = arr[i];
	}
	delete[] arr[rows - 1];
	delete[] arr;
	arr = newArr;
	rows--;
}


template<class T>
void delete2D(T**& p, int& row)
{
	delete p[row - 1];
	row--;
}

template<class T>
void addColummArray2D(T**& p, int row, int& col, T* newColumn = nullptr)
{
	for (size_t i = 0; i < row; i++)
	{

		addValueArray(p[i], col, newColumn[i]);
		col--;


		/*T* newRow = new T[col + 1];
		for (size_t j = 0; j < col; j++)
		{
			newRow[j] = p[i][j];
		}
		newRow[col] = (newColumn == nullptr) ? 0 : newColumn[i];
		delete[] p[i];
		p[i] = newRow;*/
	}
	col++;
}


void hello()
{
	cout << "Hello" << endl;
}

void goodbye()
{
	cout << "Goodbye" << endl;
}

int sum(int a, int b)
{
	return a + b;
}

int diff(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}

int pow_(int a, int b)
{
	return pow(a, b);
}


// type(*nameFunc(paramFunc))(paramReturnFunc)


void gun(int* bullet)
{
	cout << "->" << endl;
	bullet[0]--;
}

void mashineGun(int* bullet)
{
	cout << "->->->->->" << endl;
	bullet[1] -= 5;
}


void arrow(int* bullet)
{
	cout << ">>----->" << endl;
	bullet[2]--;
}


int maxElemArray(int* arr, int size)
{
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

void(*logic(int* bullets))(int*)
{
	void(*weapon[])(int*) = { gun, mashineGun, arrow };

	return weapon[findElemArray(bullets, 3, maxElemArray(bullets, 3))];
}