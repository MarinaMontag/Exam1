// Биле 4 номер 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void input_matrix(int m, int n, int**a);
int max_element(int m, int n, int ** a);
int  counter(int max_element(int m, int n, int ** a), int m, int n, int ** a);

int main()
{
	int m, n;
	cin >> m >> n;
	int **a = new int*[m];
	for (int i = 0; i < m; i++)
		a[i] = new int[n];
	input_matrix(m, n, a);
	counter(max_element(m, n, a), m, n, a));
	for (int i = 0; i < m; i++)
		delete a[i];
	delete a;
	return 0;
}

void input_matrix(int m,int n, int**a) {
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 100;
		}
}

int  max_element(int m, int n, int ** a)
{
	int max = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			int counter = 0;
			if (a[i][j] >= max)
			{
				max = a[i][j];
			}
		}
	return max;
}

int counter(int max_element(int m, int n, int ** a), int m, int n, int ** a)
{ 
	int counter = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == max_element(m, n, a))
				counter++;
	if (counter > 1)
		return max_element(m, n, a);
	else return 0;
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
