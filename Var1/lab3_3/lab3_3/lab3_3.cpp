// lab3_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;
void fn(char* buff, char** Arr1, int jn, int i);
int vb(int* jnn, int n, int nn);
int main()
{
	setlocale(LC_ALL, "Russian");
	int  i = 0, j = 0, i1 = 0, i2 = 0, j1 = 0, j2 = 0, j3 = 0; char n1; int* jn;
	char** Arr1; char buff[500]; int* jj; int lol;
	ofstream fout; ifstream vod;

	vod.open("1.txt");//кол чет чисел.
	while (!vod.eof())
	{
		vod.getline(buff, 50);
		i1++;
	}

	vod.close();

	jn = new int[i1];
	
	
	vod.open("1.txt");
	for (int i = 0; i < i1; i++)
	{
		vod.getline(buff, 50);
		jn[i] = strlen(buff);

	}
	vod.close();


	//	cout << "j1 = " << jn[0];
	//	cout << "j2 = " << jn[1];
	//	cout << "j3 = " << jn[2];

	Arr1 = new char* [i1];// динамический массив
	for (int i = 0; i < i1; i++)
	{
		Arr1[i] = new char[50];

	}
	cout << "----" << endl;
	vod.open("1.txt");
	for (int i = 0; i < i1; i++)
	{

		vod.getline(buff, 50);

		//Arr1[i] = buff;
		lol = vb(jn, i1, i);
		fn(buff, Arr1, jn[i], lol);


	}
	vod.close();

	cout << Arr1[0] << endl << Arr1[1] << endl << Arr1[2] << endl;
}


void fn(char* buff, char** Arr1, int jni, int io)
{
	for (int ji = 0; ji < jni + 4; ji++)
	{
		Arr1[io][ji] = buff[ji];
	}
}

int vb(int* jnn, int n,int nn)
{
	int max = 0;
	
		for (int i = 0; i < n; i++)
		{
			if (jnn[nn] > jnn[i]) { max++; }
		}
		return max;

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
