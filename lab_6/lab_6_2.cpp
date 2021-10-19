#include <iostream>
#include <cmath>

int main()
{
	int A, B, C, buffer;

	std::cout << "\nInput A: ";
	std::cin >> A;
	std::cout << "\nInput B: ";
	std::cin >> B;
	std::cout << "\nInput C: ";
	std::cin >> C;

	buffer = B;
	B = A;
	A = C;
	C = buffer;
	
	std::cout << "\nA is: " << A;
	std::cout << "\nB is: " << B;
	std::cout << "\nC is: " << C;
}
