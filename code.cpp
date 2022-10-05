#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	int d = 0;
	std::cout << "введите текущий месяц: ";
	std::cin >> a;
	std::cout << "введите сегодняшнее число: ";
	std::cin >> b;
	std::cout << "введите текущий год: ";
	std::cin >> c;
		if (a == 1)
			d += b;
		else if (a == 2)
			d += 31 + b;
		else if (a == 3)
			d += 59 + b;
		else if (a == 4)
			d += 90 + b;
		else if (a == 5)
			d += 120 + b;
		else if (a == 6)
			d += 151 + b;
		else if (a == 7)
			d += 181 + b;
		else if (a == 8)
			d += 212 + b;
		else if (a == 9)
			d += 243 + b;
		else if (a == 10)
			d += 273 + b;
		else if (a == 11)
			d += 304 + b;
		else if (a == 12)
			d += 334 + b;
		if (((c % 4 == 0 and c % 100 != 0) or (c % 4 == 0 and c % 100 == 0 and c % 400 == 0)) and a > 2)
			d += 1;

		if (d % 100 > 10 and d % 100 < 20)
			std::cout << "прошло " << d << " дней";
		else if ((d == 1) or (d % 10 == 1))
			std::cout << "прошёл " << d << " день";
		else if ((d % 10 == 2) or (d % 10 == 3) or (d % 10 == 4))
			std::cout << "прошло " << d << " дня";
		else
			std::cout << "прошло " << d << " дней";
}
