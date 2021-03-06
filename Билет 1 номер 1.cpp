// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

void input_matrix(int**a);
int sum1(int k, int**a);
int sum2(int k, int**a);
double vector(int*s);

int main()
{
	int s[59];
	int **a = new int *[30];
	for (int i = 0; i < 30; i++)
		a[i] = new int[30];
	input_matrix(a);
	for (int k = 0; k <59; k++)
	{
		if (k < 30)
		{
			s[k] = sum1(k, a);
			cout << s[k] << " ";
		}
		else
		{
			s[k] = sum2(k, a);
			cout << s[k] << " ";
		}
	}
	vector(s);
	for (int i = 0; i < 30; i++)
		delete a[i];
	delete a;
	return 0;
}

void input_matrix( int**a) 
{
	srand(time(NULL));
	for (int i = 0; i < 30; i++)
		for (int j = 0; j < 30; j++)
		{
			a[i][j] = rand() % 100;
		}
}

int sum1(int k,int**a)
{
	int sum=0;
	for (int i = 29 - k, j = 0; i < 30, j <= k; i++, j++)
		sum += a[i][j];
	return sum;
}

int sum2(int k, int**a)
{
	int sum = 0;
	for (int i = 0, j = k-29; i < 30, j <30; i++, j++)
		sum += a[i][j];
	return sum;
}

double vector(int*s)
{
	int vect; int sum = 0;
	for (int k = 0; k <= 59; k++)
		sum = pow(s[k], 2);
	vect = sqrt(sum);
	return vect;
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
