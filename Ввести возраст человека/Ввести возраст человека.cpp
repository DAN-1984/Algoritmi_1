// Ввести возраст человека.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using std::cout;
int main()
{
	setlocale(LC_ALL, "Russian");
	int year, t1, t2;
	
	while (true)
	{
		cout << "Ввести возраст человека от 1 до 150 лет ";
		std::cin >> year;
		if (year > 0 && year < 151)
		{
			t1 = year % 10;
			t2 = year % 100;
			
			if (t1 == 1 && t2 != 11) { std::cout << year << " год\n"; }
			if (t1 >= 2 && t1 <= 4 && (t2 < 10 || t2 >= 20)) { std::cout << year << " года\n"; }
			else { if(year != 1) std::cout << year << " лет\n"; }
		}
	}
}


