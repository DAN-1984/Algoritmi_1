// Решение уравнения.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	double x1;
	double y1;
	double x2;
	double y2;

	printf("Input x1:");
	scanf("%lf", &x1);
	printf("Input y1:");
	scanf("%lf", &y1);
	printf("Input x2:");
	scanf("%lf", &x2);
	printf("Input y2:");
	scanf("%lf", &y2);
	double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	printf("Distance: %lf", dist);
	cin.get();
	cin.get();
}

