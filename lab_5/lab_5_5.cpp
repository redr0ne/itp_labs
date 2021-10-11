#include <iostream>
#include <cmath>

int main()
{
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;

	std::cout << "\nInput the x1: ";
	std::cin >> x1;

	std::cout << "\nInput the y1: ";
	std::cin >> y1;

	std::cout << "\nInput the x2: ";
	std::cin >> x2;

	std::cout << "\nInput the y2: ";
	std::cin >> y2;

	std::cout << "\nInput the x3: ";
	std::cin >> x3;

	std::cout << "\nInput the y3: ";
	std::cin >> y3;

	float length_AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)); //Calculates length according to the Pythagorean theorem
	float length_AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	float length_BC = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	float perimeter = length_AC + length_AB + length_BC;
	float semi_perimeter = perimeter / 2;
	float area = sqrt(semi_perimeter * (semi_perimeter - length_AC) * (semi_perimeter - length_AB) * (semi_perimeter - length_BC)); //Calculates the area according to Heron's formula

	std::cout << "\nPerimeter is: " << perimeter;
	std::cout << "\nArea is: " << area;
}
