#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double z1, z2, b, a;
	std::cout << "Введите a \n";
	std::cin >> a;
	std::cout << "Введите b \n";
	std::cin >> b;
	z1 = (1 - 2 * (pow(sin(a), 2))) / (1 + sin(2 * a));
	z2 = (1 - tan(a)) / (1 + tan(a));
	std::cout << "z1 = " << z1 << " ; z2 ";
	return 0;
}

