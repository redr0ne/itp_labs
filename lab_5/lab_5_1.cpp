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

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculates distance according to the Pythagorean theorem

    std::cout << "\nDistance between points: " << distance;
}
