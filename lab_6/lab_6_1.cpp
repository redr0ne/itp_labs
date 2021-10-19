#include <iostream>
#include <cmath>

int main()
{
	int A, B, buffer;

	std::cout << "\nInput A: ";
	std::cin >> A;
	std::cout << "\nInput B: ";
	std::cin >> B;

	buffer = A;
	A = B;
	B = buffer;
	
	std::cout << "\nA is: " << A;
	std::cout << "\nB is: " << B;
}
