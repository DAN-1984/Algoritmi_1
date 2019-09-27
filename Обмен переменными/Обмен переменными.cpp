// Обмен переменными.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a = 10, b = 30;
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	cout << a << endl;
	cout << b << endl;
	getchar();
}


