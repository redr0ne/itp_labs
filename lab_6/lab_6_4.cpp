#include <iostream>
#include <cmath>

int main()
{
	int x, y;

	std::cout << "\nInput x: ";
	std::cin >> x;

	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

	std::cout << "\ny is: " << y;
}
