#include <iostream>
#include <cmath>

int main()
{
	int number = 0;

    std::cout << "\nEnter the number: ";
    std::cin >> number;


    if ((number < 0) and (number % 2 == 0)){
        std::cout << "\nNegative even number";
    } else if ((number < 0) and (number % 2 == -1)){
        std::cout << "\nNegative odd number";
    } else if ((number > 0) and (number % 2 == 0)){
        std::cout << "\nPositive even number";
    } else if ((number > 0) and (number % 2 == 1)){
        std::cout << "\nPositive odd number";
    } else {
        std::cout << "\nZero number";
    }
}
