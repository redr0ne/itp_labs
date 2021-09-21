#include <iostream>

int main()
{
    int d;

    std::cout << "Input diameter: ";
    std::cin >> d;


    float L = 3.14 * d;

    std::cout << "Circumference is: " << L;
}