#include <iostream>
#include <cmath>

int main()
{
	int A, A_2, A_3, A_15;

	std::cout << "\nInput A: ";
	std::cin >> A;

	A_2 = A * A;
	A_3 = A_2 * A;

	A_15 = A_3 * A_3 * A_3 * A_3 * A_2 * A;

	std::cout << "\nA^15 is: " << A_15;
}
