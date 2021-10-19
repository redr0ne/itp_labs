#include <iostream>
#include <cmath>

int main()
{
	int x, y, t;

	std::cout << "\nInput x: ";
	std::cin >> x;

	t = pow(x - 3, 3); //replacement for easier computation

	y = 4 * pow(t, 2) - 7 * t + 2;

	std::cout << "\ny is: " << y;
}
