#include <iostream>
#include <cmath>

int main()
{
	int A, A_2, A_8;

	std::cout << "\nInput A: ";
	std::cin >> A;

	A_2 = A * A;
	A_8 = A_2 * A_2 * A_2 * A_2;

	std::cout << "\nA^8 is: " << A_8;
}
