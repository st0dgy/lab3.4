// Lab_03_4.cpp
// < Соловей Катерина >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 18
#include <iostream>
using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if (((y <= sqrt(R * R - pow((x - R), 2) + R) && y <= x) ||
		((y <= sqrt(R * R - pow((x + R), 2) - R))  && y >= -x && y<=0)))))
		cout << "yes" << endl;
	else

         cout << "no" << endl;
		cin.get();
		return 0;
}
