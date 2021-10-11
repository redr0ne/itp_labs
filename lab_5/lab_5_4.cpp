#include <iostream>
#include <cmath>

int main()
{
    int x1;
    int x2;
    int y1;
    int y2;

    std::cout << "\nInput x1: ";
    std::cin >> x1;

    std::cout << "\nInput y1: ";
    std::cin >> y1;

    std::cout << "\nInput x2: ";
    std::cin >> x2;

    std::cout << "\nInput y2: ";
    std::cin >> y2;
	
	int x3 = x2;
	int y3 = y1; //partially completes the rectangle

    int perimeter = abs(x3 - x1) * 2 + abs(y2 - y3) * 2;
    int area = (x3 - x1) * (y2 - y3);

    std::cout << "\nPerimeter is: " << perimeter;
    std::cout << "\nArea is: " << area;
}