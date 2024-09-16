﻿//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<conio.h>

#include"myFunc.h"
#include"strFunc.h"
#include"MyStruct.h"
#include"Menu.h"

using namespace std;


enum DIRECTION
{
	UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ESC = 27
};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);
	SetColor(White, Black);
	system("cls");
	srand(time(0));


	///// 13.09.2024 //////

	//=============================================================================


	//int c = Menu::select_vertical({ "Add", "Del", "Exit" }, HorizontalAlignment::Center);


	Group gr;
	gr.menu();

	/*Point p1;
	p1.x = 10;
	p1.y = 20;
	p1.name = 'A';

	Point p2 = { 'B', 3, 6 };

	printPoint(p1);

	Point* p3 = new Point;
	p3->name = 'C';
	p3->x = 5;
	p3->y = 2;

	printPoint(*p3);

	Point p4[] = { 'D', 5, 7, 'F', 4, 6 };
	for (size_t i = 0; i < 2; i++)
	{
		printPoint(p4[i]);
	}*/

	/*Point p[5];
	setArray(p, 5);
	for (size_t i = 0; i < 5; i++)
	{
		printPoint(p[i]);
	}

	Point p1 = maxLength(p, 5);
	printPoint(p1);*/


	/*Date d;
	d.set();
	d.print();


	Human h;
	h.birthDay.set();
	h.birthDay.print();*/


	Car car;
	car.Move();
	car.Beep();




	///// 09.09.2024 //////

	//=============================================================================

	/*char str[] = { 'H', 'e', 'l', 'l', 'o', '\0'};

	char str2[] = "Hello C++";

	int arr[] = { 1,2,3 };

	cout << arr << endl;

	cout << str << endl;

	cout << lenstr(str) << endl;

	cout << strlen(str) << endl;*/

	//char* buff = new char[80];

	//cin.getline(buff, 80);
	////cout << buff << endl;

	//char* dStr = new char[strlen(buff) + 1];
	//strcpy_s(dStr, strlen(buff)+1, buff);

	//cout << dStr << endl;

	//cout << replaceSymbol(dStr, 'a', '+') << endl;


	//char str1[80] = "erewrtertwertwertwert";
	//char str2[80];
	//cin.getline(str1, 80);
	//cin.getline(str2, 80);

	//strcpy_s(str2, strlen(str1) + 1, str1);
	//strncpy_s(str2, strlen(str1) + 1, str1, 5);

	//strcat_s(str1, 80, str2);
	//strncat_s(str1, 80, str2, 5);

	//cout << strcmp(str1, str2) << endl;
	//cout << strncmp(str1, str2, 5) << endl;
	//cout << _stricmp(str1, str2) << endl;
	//cout << _strnicmp(str1, str2, 5) << endl;

	/*char* t = strrchr(str1, 'a');
	if(t != nullptr)
		cout << t << endl;*/


		/*char* t = strstr(str1, "ma");
		if (t != nullptr)
			cout << t << endl;*/

			//_strlwr_s(str1, 80);
			//_strupr_s(str1, 80);

			/*int a1 = atoi(str1);
			long a2 = atol(str1);
			double a3 = atof(str1);

			cout << a3 << endl;*/

			//_itoa_s(34645646547, str1, 36);

			//cout << str1 << endl;




			//cout << kolslov(str1) << endl;

			// ertewr   ewrtre wertewr  

			///// 06.09.2024 //////

			//=============================================================================


			/*int size;
			cin >> size;

			int* p = new int[size];
			setArray(p, size, 0, 999);
			printArray(p, size);
			bubbleSort(p, size, FromSumNumber);
			printArray(p, size);*/


			/*int bullets[3] = { 50, 50, 50 };
			void(*shot)(int*);


			while (true)
			{
				shot = logic(bullets);
				shot(bullets);
				Sleep(1000);
			}*/



			// type (*name)(param);

			//void (*message)();
			//message = hello;
			//message();
			//message = goodbye;
			//message();

			////int (*operation)(int, int) = sum;
			//int (*operation[])(int, int) = {sum, diff, mult, division, pow_};
			//int a, b;
			//cin >> a >> b;
			//cout << "1+, 2-, 3-*, 4/, 5^  : ";
			//int choice;
			//cin >> choice;
			//cout << operation[choice-1](a, b) << endl;





			/*int row = 3, col = 4;

			int** p = nullptr;
			createArr2D(p, row, col);
			setArr2D(p, row, col);
			printArr2D(p, row, col);*/


			//swap(p[0], p[row - 1]);

			/*for (size_t i = 0; i < col; i++)
			{
				swap(p[0][i], p[row - 1][i]);
			}*/


			/*starLine(20);

			int* b = new int[row];
			setArray(b, row);
			printArray(b, row);
			starLine(20);

			addColummArray2D(p, row, col, b);

			printArr2D(p, row, col);*/

			///// 02.09.2024 //////

			//=============================================================================


			/*int a = 5;
			int* p1 = &a;
			int** p2 = &p1;

			cout << p1 << endl;
			cout << p2 << endl;

			cout << *p2 << endl;
			cout << **p2 << endl;*/

			//**p
			//*(*(p+i)+j) = p[i][j]

			//int row = 3, col = 4;

			//int** p = nullptr;
			//createArr2D(p, row, col);
			//setArr2D(p, row, col);
			//printArr2D(p, row, col);
			//

			////int* b = new int[col];
			////setArray(b, col+1);

			//cout << endl;
			//addRowArr2D(p, row, col);
			//printArr2D(p, row, col);

			//deleteArr2D(p, row);


			///// 01.07.2024 //////

			//=============================================================================

			//int a = 5;
			//int b = 8;
			//const int* pa1 = &a; // покажчик на константне значення
			////a = 99;
			////*pa1 = 99;
			//pa1 = &b;
			////*pa1 = 99;


			//int* const pa2 = &a; // константний покажчик
			//*pa2 = 99;
			////pa2 = &b;

			//const int* const pa3 = &a; // константний покажчик на константне значення
			////*pa3 = 99;
			////pa3 = &b;

			//swap(a, b);

			//func(&a);
			//cout << a << endl;



			///// 24.06.2024 //////

			//=============================================================================

			/*int size;
			cout << "Size: ";
			cin >> size;

			int* p = new int[size];
			setArray(p, size);
			printArray(p, size);

			int b = 99;
			addValueArray(p, size, b);
			printArray(p, size);
			delValueArray(p, size);
			printArray(p, size);


			int* neg = nullptr;
			int sizeNeg = 0;

			int* pos = nullptr;
			int sizePos = 0;

			int* zero = nullptr;
			int sizeZero = 0;


			rozpodil(p, size, neg, sizeNeg, pos, sizePos, zero, sizeZero);

			printArray(neg, sizeNeg);
			printArray(pos, sizePos);
			printArray(zero, sizeZero);*/


			/*int* b = nullptr;
			int sizeB = 0;

			for (size_t i = 0; i < size; i++)
			{
				if (p[i] % 2 == 0)
				{
					b = addValueArray(b, &sizeB, p[i]);
				}
			}

			printArray(b, sizeB);*/


			/*int a = 5;            int b = 7;
			int& ra = a;          int* pb = &b;
			ra = 55;              *pb = 66;
			ra = b;

			cout << a << endl;
			cout << b << endl;

			my_swap(a, b);

			cout << a << endl;
			cout << b << endl;*/

			///// 21.06.2024 //////

			//=============================================================================

			//int a = 5;
			//cout << typeid(a).name() << endl;
			//cout << a << endl;
			//cout << &a << endl;
			//cout << sizeof(a) << endl;

			//// type *name;
			//int* pa = &a;
			//*pa = 100;

			//cout << a << endl;

			//int b = 50;
			////pa = &b;
			////*pa = 999;
			//cout << pa << endl;
			//cout << b << endl;

			//double d = 2.25;
			////pa = &d;
			//double* pd = &d;

			//cout << sizeof(pa) << endl;
			//cout << sizeof(pd) << endl;

			//char* pc;
			//cout << sizeof(pc) << endl;


			// ++, --, +, - //   pa = pa + type*n

			/*int a = 5;
			int* pa = &a;
			cout << pa << endl;
			cout << *(pa + 1) << endl;*/


			//int arr[4] = { 2,4,6,8 };
			////cout << arr << endl;
			////cout << *(arr + 0) << endl;
			////cout << *(arr + 1) << endl;
			////cout << *(arr + 2) << endl;
			////cout << *(arr + 3) << endl;

			//for (int i = 3; i >= 0; i--)
			//{
			//	cout << *(arr + i) << " ";   /// *(arr + i) = arr[i]
			//	//cout << arr[i] << " ";
			//}
			//cout << endl;

			//int* pa = arr;
			//pa++;
			////arr++; // error

			//for (int* i = arr; i < &arr[4]; i++)
			//{
			//	cout << *i << " ";
			//}

			// < > <=, >=,   == , !=

			/*int d = 0;
			int a = 5, b = 5;
			int* pa = &a;
			int* pb = &a;
			int* pc = nullptr;
			cout << pa << endl;
			cout << pb << endl;
			cout << pc << endl;
			cout << (pa != nullptr) << endl;*/



			//int arr[300000] = { 2,4,6,8 };

			//int size;
			//cin >> size;

			//int* p = new int[size];
			//setArray(p, size, 0, 10);
			//printArray(p, size);


			//int* a = new int;
			////

			//delete a;

			//a = new int;

			//for (size_t i = 0; i < 1000000; i++)
			//{
			//	a = new int[10000];
			//	//Sleep(20);
			//}


			//*p = 100;
			//cout << *p << endl;



			///// 14.06.2024 //////

			//=============================================================================

			//const int size = 3;
			//char field[size][size]; // = { {'0', ' ', 'X'},
			//						  //     {'X', 'X', '0'}, 
			//						  //     {'0', ' ', 'X'}};
			//						
			//int move = 0;
			//initField(field, size);
			//do
			//{
			//	printField(field, size);
			//	moveUser(field, size);
			//	move++;
			//	system("cls");
			//	printField(field, size);
			//	Sleep(1000);
			//	if (isWinner(field, size) != ' ')
			//	{
			//		break;
			//	}
			//	system("cls");
			//	if (move == size * size)
			//	{
			//		break;
			//	}

			//	moveComp(field, size);
			//	move++;
			//	printField(field, size);
			//	
			//	if (isWinner(field, size) != ' ')
			//	{
			//		break;
			//	}
			//	
			//	system("cls");
			//} while (true);
			//char win = isWinner(field, size);
			//if (win == ' ')
			//{
			//	cout << "Draw" << endl;
			//}
			//else
			//{
			//	cout << "Winner: " << win << endl;
			//}

			//=============================================================================

			/*CONSOLE_CURSOR_INFO curs = { 0 };
			curs.dwSize = sizeof(curs);
			curs.bVisible = FALSE;
			::SetConsoleCursorInfo(::GetStdHandle(STD_OUTPUT_HANDLE), &curs);*/


			/*int x = 0, y = 20;
			while (true)
			{

				if (_kbhit())
				{
					gotoxy(x, y);
					cout << "     ";
					char c = _getch();
					switch (c)
					{
					case LEFT:
						if (x > 0)
							x--;
						break;
					case RIGHT:
						if (x < 80)
							x++;
						break;
					default:
						break;
					}

					gotoxy(x, y);
					cout << "#####";
				}
			}*/





			//const int size = 5;
			//int a[size];
			//setArray(a, size, 0, 9);
			//printArray(a, size);
			//printArray(a, size);

			//float b[size] = {3.3, 5.55, 7.77, 4.44, 2.222};
			//setArray(b, size, 0, 9);
			//printArray(b, size);
			//cout << findElemArray(b, size, 5) << endl;
			//cout << maxArray(b, size) << endl;

			/*int a = 3;
			float b = 5.5;

			cout << Sum(3.6, a, 3.3) << endl;

			auto c = 5;

			decltype (b + a) n;*/



			/*starLine();
			starLine(30);
			starLine(50, '$');

			cout << Sum(10, 20) << endl;
			cout << Sum(10, 20, 10) << endl;
			cout << Sum(10, 20, 10, 20) << endl;*/


			///// 10.06.2024 //////

			//=============================================================================

			//starLine();

			//cout << starLine << endl;


			/*int a, b;
			cin >> a >> b;
			int c = Sum(a, b);
			cout << Sum(a, b) << endl;*/

			//cout << avg3(3, 4, 6) << endl;

			/*isEven(7);

			int count = 0;
			int a[] = { 1,2,4,6,8,0 };
			for (size_t i = 0; i < 6; i++)
			{
				if (isEven(a[i]))
				{
					count++;
				}
			}
			cout << count << endl;*/

			/*int a = 5;
			a = Inc(a);
			cout << a << endl;

			cout << (isEven(a) && big10(a)) << endl;*/

			//const int size = 15;
			//int a[size];// = { 1,2,5,87,9,8,6,4,3,43};
			//setArray(a, size, 0, 9);
			//printArray(a, size);
			////cout << findElemArray(a, size, 5) << endl;
			//reverseArray(a, size);
			//printArray(a, size);

			// HW
			// min, max, avg, sort, sum 

			///// 07.06.2024 //////

			//=============================================================================

		//	srand(time(0));
		//	const int rows = 4;
		//	const int cols = 5;
		//	int arr[rows][cols]; // = { {3,5,8},{2,4},7,8,4 };
		//
		//	cout << arr;
		//
		//	int minValue = 0, maxValue = 9;
		//
		//	for (size_t i = 0; i < rows; i++)
		//	{
		//		for (size_t j = 0; j < cols; j++)
		//		{
		//			arr[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		//		}
		//	}
		//
		//#pragma region MaxSymbol
		//
		//	int symbolMaxValue = 0;
		//	int m = maxValue;
		//	if (maxValue <= 0)
		//	{
		//		symbolMaxValue = 1;
		//		m = abs(maxValue);
		//	}
		//	symbolMaxValue += (int)log10(m) + 1;
		//
		//	int symbolMinValue = 0;
		//	int k = minValue;
		//	if (minValue <= 0)
		//	{
		//		symbolMinValue = 1;
		//		k = abs(minValue);
		//	}
		//	symbolMinValue += (int)log10(k) + 1;
		//
		//	int bs = (symbolMaxValue > symbolMinValue) ? symbolMaxValue : symbolMinValue;
		//
		//#pragma endregion
		//
		//	for (size_t i = 0; i < rows; i++)
		//	{
		//		for (size_t j = 0; j < cols; j++)
		//		{
		//			cout << setw(bs + 1) << arr[i][j];
		//		}
		//		cout << endl;
		//	}
		//	cout << endl;


			/// vertical
			/*for (size_t j = 0; j < cols; j++)
			{
				for (size_t i = 0; i < rows / 2; i++)
				{
					swap(arr[i][j], arr[rows - 1 - i][j]);
				}
			}*/

			/// gorizontal
			/*for (size_t i = 0; i < rows; i++)
			{
				for (size_t j = 0; j < cols / 2; j++)
				{
					swap(arr[i][j], arr[i][cols - 1 - j]);
				}
			}*/

			/// diagonal
			/*for (size_t i = 0; i < rows-1; i++)
			{
				for (size_t j = i+1; j < cols; j++)
				{
					swap(arr[i][j], arr[j][i]);
				}
			}*/

			/// 2-diagonal
			/*for (size_t i = 0; i < rows - 1; i++)
			{
				for (size_t j = 0; j < cols-1-i; j++)
				{
					swap(arr[i][j], arr[rows-1-j][cols-1-i]);
				}
			}*/

			/*for (size_t i = 0; i < rows * cols; i++)
			{
				cout << setw(bs + 1) << arr[i / cols][i % cols];
				if ((i + 1) % cols == 0)
				{
					cout << endl;
				}
			}
			cout << endl;*/

			/*for (size_t i = 0; i < rows; i++)
			{
				for (size_t j = 0; j < cols; j++)
				{
					cout << setw(bs + 1) << arr[i][j];
				}
				cout << endl;
			}
			cout << endl;*/


			///// 03.06.2024 //////

			//=============================================================================

			// type name[rows][cols];

			//srand(time(0));
			//const int rows = 10;
			//const int cols = 2;
			//int arr[rows][cols]; // = { {3,5,8},{2,4},7,8,4 };

			//int minValue = -20, maxValue = 20;

			//for (size_t i = 0; i < rows; i++)
			//{
			//	for (size_t j = 0; j < cols; j++)
			//	{
			//		arr[i][j] = rand() % (maxValue - minValue + 1) + minValue;
			//	}
			//}

#pragma region MaxSymbol

	/*int symbolMaxValue = 0;
	int m = maxValue;
	if (maxValue <= 0)
	{
		symbolMaxValue = 1;
		m = abs(maxValue);
	}
	symbolMaxValue += (int)log10(m) + 1;

	int symbolMinValue = 0;
	int k = minValue;
	if (minValue <= 0)
	{
		symbolMinValue = 1;
		k = abs(minValue);
	}
	symbolMinValue += (int)log10(k) + 1;

	int bs = (symbolMaxValue > symbolMinValue) ? symbolMaxValue : symbolMinValue;*/

#pragma endregion

	/*for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << setw(bs + 1) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;*/

	//=============================================================================


	/*int arr_max[rows];

	for (size_t i = 0; i < rows; i++)
	{
		int max = arr[i][0];
		for (size_t j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
		arr_max[i] = max;
	}

	int min = arr_max[0];
	for (size_t i = 0; i < rows; i++)
	{
		if (min < arr_max[i])
		{
			min = arr_max[i];
		}
	}

	cout << min << endl;*/


	//=============================================================================


	/*int arr_min[cols];

	for (size_t j = 0; j < cols; j++)
	{
		int min = arr[0][j];
		for (size_t i = 0; i < rows; i++)
		{
			if (arr[i][j] > min)
			{
				min = arr[i][j];
			}
		}
		arr_min[j] = min;
	}

	int max = arr_min[0];
	for (size_t i = 0; i < cols; i++)
	{
		if (max < arr_min[i])
		{
			max = arr_min[i];
		}
	}

	cout << max << endl;*/



	//=============================================================================

	/*int max, min;
	max = min = arr[0][0];

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}

			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (arr[i][j] == max)
			{
				SetColor(Red, Black);
			}
			if (arr[i][j] == min)
			{
				SetColor(Green, Black);
			}
			cout << setw(bs + 1) << arr[i][j];
			SetColor(White, Black);
		}
		cout << endl;
	}*/


	//cout << (int)log10(-4576) + 1 << endl;

	//arr[2][1] = 10;


	// Дано множество A из N точек на плоскости и точка B(точки заданы
	// своими координатами x, y).Найти точку из множества A, наиболее близ -
	// кую к точке B.

	/*const int r = 10;
	const int c = 3;
	int A[r][c];
	for (size_t i = 0; i < r; i++)
	{
		A[i][0] = 'A' + i;
		A[i][1] = rand() % (maxValue - minValue + 1) + minValue;
		A[i][2] = rand() % (maxValue - minValue + 1) + minValue;
	}

	for (size_t i = 0; i < r; i++)
	{
		cout << (char)A[i][0] << " (" << A[i][1] << ", " << A[i][2] << ")" << endl;
	}

	int x, y;
	cout << "Задайте координати точки: " << endl;
	cin >> x >> y;

	double min = INT_MAX;
	int ind;
	for (size_t i = 0; i < rows; i++)
	{
		double d = sqrt(pow(x - A[i][1], 2) + pow(y - A[i][2], 2));
		if (d < min)
		{
			min = d;
			ind = i;
		}
	}

	cout << "Найближча точка: " << ind + 1 << endl;*/



	///// 31.05.2024 //////

	//=============================================================================

	/*const int size = 10;
	int arrA[size];
	int arrB[size];
	int arrC[size * 2];
	srand(time(0));

	int minValue = 1, maxValue = 20;
	for (size_t i = 0; i < size; i++)
	{
		arrA[i] = rand() % (maxValue - minValue + 1) + minValue;
		arrB[i] = rand() % (maxValue - minValue + 1) + minValue;
	}

	cout << "A = ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arrA[i] << " ";
	}
	cout << endl;


	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arrA[i], arrA[size - 1 - i]);
	}*/



	/*int count = 0;
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arrA[j] < arrA[j + 1])
			{
				swap(arrA[j], arrA[j + 1]);
				count++;
			}
		}
	}*/

	/*int t = arrA[0];
	arrA[0] = arrA[size - 1];
	arrA[size - 1] = t;*/

	/*cout << "A = ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arrA[i] << " ";
	}
	cout << endl;*/

	//cout << count << endl;



	/*cout << "B = ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arrB[i] << " ";
	}
	cout << endl;*/

	//int sizeC = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	bool flag = true;
	//	for (size_t j = 0; j < size; j++)
	//	{
	//		if (arrA[i] == arrB[j]) 
	//		{
	//			flag = false;
	//			break;
	//		}
	//	}
	//	if (flag)
	//	{
	//		bool flagC = true;
	//		for (size_t k = 0; k < sizeC; k++)
	//		{
	//			if (arrA[i] == arrC[k])
	//			{
	//				flagC = false;
	//				break;
	//			}
	//		}
	//		if (flagC)
	//		{
	//			arrC[sizeC++] = arrA[i];
	//		}
	//	}
	//}

	//for (size_t i = 0; i < size; i++)  // B
	//{
	//	bool flag = true;
	//	for (size_t j = 0; j < size; j++) // A
	//	{
	//		if (arrB[i] == arrA[j])
	//		{
	//			flag = false;
	//			break;
	//		}
	//	}
	//	if (flag)
	//	{
	//		bool flagC = true;
	//		for (size_t k = 0; k < sizeC; k++)
	//		{
	//			if (arrB[i] == arrC[k])
	//			{
	//				flagC = false;
	//				break;
	//			}
	//		}
	//		if (flagC)
	//		{
	//			arrC[sizeC++] = arrB[i];
	//		}
	//	}
	//}

	//cout << "C = ";
	//for (size_t i = 0; i < sizeC; i++)
	//{
	//	cout << arrC[i] << " ";
	//}
	//cout << endl;

	//int sizeC = 0;
	//for (size_t i = 0; i < size; i++)   // A
	//{
	//	for (size_t j = 0; j < size; j++) // B
	//	{
	//		if (arrA[i] == arrB[j])
	//		{
	//			bool flag = true;
	//			for (size_t k = 0; k < sizeC; k++)
	//			{
	//				if (arrA[i] == arrC[k]) 
	//				{
	//					flag = false;
	//					break;
	//				}
	//			}
	//			if (flag)
	//			{
	//				arrC[sizeC++] = arrA[i];
	//			}
	//		}
	//	}
	//}

	/*cout << "C = ";
	for (size_t i = 0; i < sizeC; i++)
	{
		cout << arrC[i] << " ";
	}
	cout << endl;*/





	///// 27.05.2024 //////

	//=============================================================================
	/*const int size = 10;
	int arr[size];
	srand(time(0));

	int minValue = 1, maxValue = 20;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/


	// Дан массив A размера N.Вывести вначале его элементы с четными
	// номерами(в порядке возрастания номеров), а затем — элементы с нечет -
	// ными номерами(также в порядке возрастания номеров) :


	//=============================================================================

	/*for (size_t i = 0; i < size; i += 2)
	{
		cout << arr[i] << " ";
	}
	for (size_t i = 1; i < size; i += 2)
	{
		cout << arr[i] << " ";
	}*/

	//=============================================================================

	// Дан массив размера N.Найти номер его первого локального миниму -
	// ма(локальный минимум — это элемент, который меньше любого из своих
	// соседей).

	/*int local_min = 1;
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] < arr[i + 1] and arr[i] < arr[i - 1])
		{
			local_min = i;
			break;
		}
	}
	cout << local_min << endl;*/


	//=============================================================================

	// Дан массив размера N.Найти количество участков, на которых его
	// элементы монотонно возрастают.

	/*int res = 0;

	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			while (arr[i] > arr[i - 1])
			{
				i++;
			}
			res++;
		}
	}

	cout << res << endl;*/


	//=============================================================================


	// Дано число R и массив A размера N.Найти элемент массива, который
	// наиболее близок к числу R

	/*int r, ind;
	cin >> r;
	int dist = INT_MAX;
	for (size_t i = 0; i < size; i++)
	{
		if (abs(arr[i] - r) < dist)
		{
			dist = abs(arr[i] - r);
			ind = i;
		}
	}
	cout << ind << endl;*/


	//=============================================================================
	// 
	// Дан целочисленный массив размера N.Найти количество различных
	// элементов в данном массиве.




	/*int arr2[size];
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr2[count++] = arr[i];
		}
	}
	for (size_t i = 0; i < count; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;*/


	//=============================================================================

	/*int max = arr[0], min = arr[0], imax = 0, imin = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}

		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
	}
	int sum = 0;
	int start = (imin < imax) ? imin : imax;
	int end = (imin > imax) ? imin : imax;
	for (size_t i = start + 1; i < end; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;*/


	///// 24.05.2024 //////

	//=============================================================================


	// type name[size];



	//cout << arr << endl;

	/*arr[0] = 3;
	arr[1] = 23;
	arr[2] = 35;
	arr[3] = 83;*/
	//cout << arr[0] << endl;
	//const int size = 10;
	//int arr[size];
	//srand(time(0));

	//int a0, d;
	/*cin >> a0 >> d;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a0 + i * d;
	}*/

	/*int minValue = -10, maxValue = -1;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;*/

	//=============================================================================

	/*d = arr[1] - arr[0];
	bool f = true;
	for (size_t i = 1; i < size - 1; i++)
	{
		if (arr[i+1] - arr[i] != d)
		{
			f = false;
			break;
		}
	}
	if (f == true)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}*/



	//=============================================================================


	/*int arr2[size];
	for (size_t i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;*/


	//=============================================================================


	/*for (size_t i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}*/

	/*int count0 = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			count0++;
		}
	}
	cout << count0 << endl;

	int c01 = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			c01++;
		}
		else
		{
			break;
		}
	}
	cout << c01 << endl;*/




	///// 17.05.2024 //////

	//=============================================================================

	// Ввести число.Если количество его разрядов меньше пяти, то вывести его на 
	// экран, дописав нули перед числом так, чтобы в итоге получилось пять знаков.
	// Если число пятизначное, то вывести его как есть.
	// 53
	// 00053
	// 458
	// 00458
	// 12365
	// 12365







	//=============================================================================

	//Имеется n бактерий красного цвета.Через 1 такт времени  красная бактерия 
	// меняется на зелёную, затем через 1 такт  времени делится на красную и 
	// зелёную.Сколько будет всех  бактерий через k тактов времени ?

	/*int k, red, green = 0;
	cin >> red >> k;

	for (int i = 1; i <= k; i++)
	{
		if (i % 2 != 0)
		{
			green += red;
			red = 0;
		}
		else
		{
			red += green;
		}
	}
	cout << "red: " << red << " green: " << green << endl;
	cout << red + green;*/


	//=============================================================================


	//  Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
	//	0.2, ..., 1 кг конфет.

	/*float price;
	cin >> price;
	for (float i = 0.1f; i <= 1.05f; i+=0.1f)
	{
		cout << i << " - " << price * i << endl;
	}*/


	///// 13.05.2024 //////


	//=============================================================================



	/*int k = 2;

	cout << " Пн Вт Ср Чт Пт";
	SetColor(LightRed, Black);
	cout << " Сб Нд" << endl;
	SetColor(White, Black);
	cout << "=====================" << endl;
	for (int i = 1 - k; i <= 31; i++)
	{
		SetColor(((i+k) % 7 == 6 || (i+k) % 7 == 0) ? LightRed:White, Black);
		if(i > 0)
			cout << setw(3) << i;
		else
			cout << setw(3) << " ";

		if ((i+k) % 7 == 0)
			cout << endl;

	}
	cout << endl;*/



	//=============================================================================


	/*for (int i = 0; i <= 20; i += 2)
	{
		cout << i << " ";
	}*/


	//=============================================================================

	/*typedef unsigned char UC;
	UC d = 0;

	for (int i = 0, j = 10; i < 10 && j > 0; i++, j--)
	{
		cout << i << " ";
	}


	for (int i = 10; i >= 0; i--)
	{
		cout << i << " ";
	}*/

	//=============================================================================

	//  Известно количество холодильников, имеющихся в продаже в каждом 
	//  из N магазинов города.Определить, сколько всего магазинов может 
	//  продать одновременно более 10 холодильников.


	/*int n, fridges = 0, shops = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Mag #" << i+1 << ": ";
		cin >> fridges;
		if (fridges > 10)
		{
			shops += 1;
		}
	}
	cout << shops << endl;*/


	//=============================================================================

	//  В городе N поликлиник.Известно, сколько врачей и сколько младшего 
	//	медицинского персонала работает в каждой поликлинике.Определить, 
	//	сколько медицинских работников работает во всех поликлиниках, 
	//	где врачей больше, чем младшего медицинского персонала.

	/*int n, s, m, res = 0;

	cout << "Введите количство поликлиник: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << "Введите количство старшего персонала в поликлинике: ";
		cin >> s;
		cout << "Введите количство младшего персонала в поликлинике: ";
		cin >> m;
		if (s > m)
		{
			res += s + m;
		}
	}

	cout << res << " персонала" << endl;*/

	//=============================================================================

	/*int n, res = 0;

	do
	{
		cout << "n = ";
		cin >> n;
		res += n;
	} while (n != 0);

	cout << res;*/



	///// 10.05.2024 //////


	/*int a = 1;

	while (a > 0)
	{
		cout << a++ << " ";
	}*/


	//=============================================================================

	//3751 = 16

	/*long long n, res = 0;

	cout << "n = ";
	cin >> n;

	while (n > 0)
	{
		res += n % 10;
		n /= 10;
	}
	cout << res << endl;*/


	//=============================================================================

	// Дано целое число N(> 0).Найти наибольшее целое число K, квадрат
	// которого не превосходит N : K2 ≤ N.Функцию извлечения квадратного кор -
	// ня не использовать.

	/*int n, k = 0;
	cout << "n = ";
	cin >> n;

	while (k * k <= n)
	{
		k++;
	}
	k--;
	cout << k << endl;*/


	//=============================================================================

	// Дано целое число N(> 0).Если оно является степенью числа 3, то вы -
	// вести True, если не является — вывести False.

	/*int n;

	cout << "n = ";
	cin >> n;

	int k = 1;
	while (k < n)
	{
		k *= 3;
	}
	if (k == n)
	{
		cout << true << endl;
	}
	else
	{
		cout << false << endl;
	}*/

	/*while (true)
	{

	}*/

	//====================================================================

	///// 06.05.2024 //////


	//  Даны два целых числа : D(день) и M(месяц), определяющие правиль -
	//	ную дату невисокосного года.Вывести значения D и M для даты, наступна
	//	для указанной.

	/*int d, m, y, dmax;
	cin >> d >> m >> y;
	d++;

	switch (m)
	{
	case 4: case 6: case 9: case 11: dmax = 30; break;
	case 2:                          dmax = (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) ? 29 : 28; break;
	default:                         dmax = 31;	break;
	}

	if (d > dmax)
	{
		d = 1;
		m++;
	}
	m = (m == 13) ? 1 : m;

	cout << d << "." << m << "." << y << endl;*/



	//  Даны два целых числа : D(день) и M(месяц), определяющие правиль -
	//	ную дату невисокосного года.Вывести значения D и M для даты, предше -
	//	ствующей указанной.

	/*int d, m, dmax;
	cin >> d >> m;
	switch (m-1)
	{
	case 4: case 6: case 9: case 11: dmax = 30; break;
	case 2:                          dmax = 28; break;
	default:                         dmax = 31;	break;
	}

	d--;

	if (d == 0)
	{
		m--;
		d = dmax;
	}

	if (m == 0)
		m = 12;

	cout << d << "." << m << endl;*/



	//  Дано целое число в диапазоне 20–69, определяющее возраст(в годах).
	//	Вывести строку - описание указанного возраста, обеспечив правильное со -
	//	гласование числа со словом «год», например: 20 — «двадцать лет», 32 —
	//	«тридцать два года», 41 — «сорок один год».


	/*int n, n1, n2;
	cin >> n;
	n1 = n / 10;
	n2 = n % 10;
	switch (n1)
	{
	case 2: cout << "Двадцять "; break;
	case 3: cout << "Тридцять "; break;
	case 4: cout << "Сорок "; break;
	case 5: cout << "П'тдесят "; break;
	case 6: cout << "Шісьдесят "; break;
	}

	switch (n2)
	{
	case 0: cout << "років" << endl; break;
	case 1: cout << "один рік" << endl; break;
	case 2: cout << "два роки" << endl; break;
	case 3: cout << "три роки" << endl; break;
	case 4: cout << "чотри роки" << endl; break;
	case 5: cout << "п'ть років" << endl; break;
	case 6: cout << "шість років" << endl; break;
	case 7: cout << "сім років" << endl; break;
	case 8: cout << "вісім років" << endl; break;
	case 9: cout << "дев'ть років" << endl; break;
	}*/


	/*
		В восточном календаре принят 60 - летний цикл, состоящий из 12 - лет -
		них подциклов, обозначаемых названиями цвета : зеленый, красный, жел -
		тый, белый и черный.В каждом подцикле годы носят названия животных :
		крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, ку -
		рицы, собаки и свиньи.По номеру года определить его название, если 1984
		год — начало цикла : «год зеленой крысы».
	*/



	/*
	I = 1
	V = 5
	X = 10
	L = 50
	C = 100
	D = 500
	M = 1000

	2024
	MMXXIV

	*/



	/*int d;
	cin >> d;
	switch (d)
	{
	case 1:
		cout << "Mo" << endl;
		break;
	case 2:
		cout << "Tu" << endl;
		break;
	default:
		cout << "Not day" << endl;
		break;
	}*/

	/*double f = 6.53;
	cout << f << endl;

	int m;
	cin >> m;
	switch (m)
	{
	case 1: case 2:  case 12: cout << "Зима" << endl; break;
	case 3: case 4:  case 5:  cout << "Весна" << endl; break;
	case 6: case 7:  case 8:  cout << "Літо" << endl; break;
	case 9: case 10: case 11: cout << "Осінь" << endl; break;
	default:                  cout << "Not month" << endl; break;
	}*/

	//float f;
	/*cin >> f;
	switch (f)
	{
	default:
		break;
	}*/

	// 2+4
	// 6

	/*int a, b, res = 0;
	char op;
	cin >> a >> op >> b;*/
	/*if (op == '+')
	{
		res = a + b;
	}
	else if (op == '-')
	{
		res = a - b;
	}
	else if (op == '*')
	{
		res = a * b;
	}
	else if (op == '/')
	{
		res = a / b;
	}*/

	/*bool f = true;
	switch (op)
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	default:
		f = false;
		cout << "Not operation" << endl;
	}
	if (f)
	{
		cout << res << endl;
	}*/

	/*float m = 3.25;
	m++;
	cout << m << endl;*/

	/*int a, b, c, d, e, f, g, max;
	cin >> a >> b >> c >> d >> e >> f >> g;
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	if (e > max)
		max = e;
	if (f > max)
		max = f;
	if (g > max)
		max = g;
	cout << max << endl;*/



	///// 26.04.2024 //////


	// Дано трехзначное число.Проверить истинность высказывания :
	// «Цифры данного числа образуют возрастающую последовательность».

	//258

	/*int n, a, b, c;
	cin >> n;
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	bool res = a < b && b < c;
	cout << res << endl;*/


	// Даны три целых числа : A, B, C.Проверить истинность высказыва -
	// ния : «Ровно одно из чисел A, B, C положительное».
	/*int a, b, c;
	cin >> a >> b >> c;
	bool res = (a > 0) + (b > 0) + (c > 0) == 1;
	cout << res << endl;*/

	/*int a, b;
	cin >> a;
	if (a == 5)
	{
		b = 10;
	}
	else
	{
		b = 15;
	}
	cout << b << endl;*/


	/*int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b && a > c)
	{
		cout << a << endl;
	}
	else
	{
		if (b > c)
		{
			cout << b << endl;
		}
		else
		{
			cout << c << endl;
		}
	}
	}*/


	// Дано целое число, лежащее в диапазоне 1–999.Вывести его строку -
	// описание вида «четное двузначное число», «нечетное трехзначное число»



	/*int a, b, c, max;
	cin >> a >> b >> c;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}*/

	// (condition) ? oper1 : oper2;

	/*(a > b) ? max = a : max = b;

	max = (a > b) ? a : b;

	max = (a > b && a > c) ? a : (b > c) ? b : c;*/



	// Определить, останется ли в клеёнке более N дырок если во время
	// обеда K раз проткнуть её вилкой с M отломанными зубчиками и 
	// L раз – целой вилкой, у которой S зубчиков.

	//d = k*(s-m) + l*s

	/*int a, b, c;
	float p, s;

	cout << " a: ";
	cin >> a;
	cout << " b: ";
	cin >> b;
	cout << " c: ";
	cin >> c;

	p = (a + b + c) / 2.;
	s = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << ": ";
	cout << p << endl;
	cout << s;
	cout << " ^2";*/




	///// 22.04.2024 //////

	// type name;

	// bool - 1b

	// char  - 1b


	// byte - 1b
	// short  - 2b
	// int - 4b
	// long - 4b
	// long long - 8b

	// float - 4b (7)
	// double - 8b (15)
	// long double - 10b

	/*short year = 2024;
	cout << &year << endl;

	int t = 'a';
	char t1 = 98;
	cout << t << endl;
	cout << t1 << endl;

	float f = 6.9999;
	cout << f << endl;

	float x = -1.5;*/

	//unsigned int c = 3000000000;
	//cout << c << endl;

	//const int a = 5;
	////a = 9;

	//bool b = true;
	//cout << b << endl;

	// -, +, ++, --
	// =, +, -, *, /, %, +=, -=, *=, /=, %=

	// !
	// <, >, <=, >=, ==, !=, &&, ||, ^(xor)

	// >>, <<, ~, &, |, ::, ?:, [], {} , (), , . ->,  \  

	//int a = 5, b = 4, c;

	//a = a + b;
	//a += b;
	//a = a + 1;
	//a += 1;
	//a++;
	//++a;
	//cout << a << endl;  //5
	//cout << a++ << endl; //6
	//cout << ++a << endl; // 7
	//cout << a << endl; // 7

	/*c = ++a * (--a - --b/a++);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	cout << 5 / 3.f << endl;
	cout << pow(5, 3) << endl;*/



	//c = a * b;
	//cout << c << endl;
	//cin >> a;




	/*cout << "Hello C++" << endl;
	cout << "Мене звати Сергій" << endl;*/

	system("pause");
	return 0;
}