﻿// lab3_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream fout; ifstream vod;
	int  i = 0, j = 0, i1 = 0, j1 = 0,j2=0 ; char n1;
	char** Arr1; char buff[500]; int* jj;


	vod.open("1.txt");//кол чет чисел.
	while (!vod.eof())
	{
		vod.getline(buff, 500); i1++;
		puts(buff);
	}
	vod.close();
	//jj = new int[i1];

	vod.open("1.txt");//кол чет чисел.
	while (!vod.eof())
	{
		vod >> n1;
		j1++;
	}
	
	vod.close();
	vod.open("1.txt");
	Arr1 = new char* [i1];// динамический массив
	for (int i = 0; i < i1; i++)
	{
		Arr1[i] = new char[j1];
		for (int j = 0; j < j1; j++)
		{
			vod >> n1;
			Arr1[i][j] = n1;
		}
	}
	vod.close();

	for (int i = 0; i < i1; i++)
	{

		for (int j = 0; j < j1; j++)
		{
			cout << Arr1[i][j];
		}
		cout << endl;
	}
	cout << i1 << "  " << j1;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
