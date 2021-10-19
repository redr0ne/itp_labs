#include <iostream>
#include <cmath>

int main()
{
	int A, B, C, B_old, C_old;

	std::cout << "\nInput A: ";
	std::cin >> A;
	std::cout << "\nInput B: ";
	std::cin >> B;
	std::cout << "\nInput C: ";
	std::cin >> C;

	B_old = B;
	C_old = C;
	C = A;
	B = C_old;
	A = B_old;
	
	std::cout << "\nA is: " << A;
	std::cout << "\nB is: " << B;
	std::cout << "\nC is: " << C;
}
