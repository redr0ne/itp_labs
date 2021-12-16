#include <iostream>
#include <cmath>

int main()
{
	int A_x;
	int A_y;
	
	int B_x;
	int B_y;
	
	int C_x;
	int C_y;

	std::cout << "\nInput the x for A: ";
	std::cin >> A_x;

	std::cout << "\nInput the y for A: ";
	std::cin >> A_y;

	std::cout << "\nInput the x for B: ";
	std::cin >> B_x;

	std::cout << "\nInput the y for B: ";
	std::cin >> B_y;

	std::cout << "\nInput the x for C: ";
	std::cin >> C_x;

	std::cout << "\nInput the y for C: ";
	std::cin >> C_y;

	float length_AC = sqrt(pow(A_x - C_x, 2) + pow(A_y - C_y, 2));
	float length_AB = sqrt(pow(A_x - B_x, 2) + pow(A_y - B_y, 2));

    if (length_AC < length_AB){
        std::cout << "\nPoint C is located closer to A, its coordinates are: " << "\n x: " << C_x << "\n y: " << C_y;
        std::cout << "\n\nDistance from point A to point C: " << length_AC;
    } else if (length_AB < length_AC) {
        std::cout << "\nPoint B is located closer to A, its coordinates are: " << "\n x: " << B_x << "\n y: " << B_y;
        std::cout << "\n\nDistance from point A to point B: " << length_AB;
    } else {
        std::cout << "\nPoints are equally distant from A";
    }

}
