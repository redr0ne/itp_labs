#include <iostream>
#include <cmath>

int main()
{
    int number_1, number_2, number_3;
    
    std::cout << "\nEnter the first number: ";
    std::cin >> number_1;
    std::cout << "\nEnter the second number: ";
    std::cin >> number_2;
    std::cout << "\nEnter the third number: ";
    std::cin >> number_3;
    
    int maximum = std::max(number_1, std::max(number_2, number_3));
    
    int greater_than_minimum = std::min(std::max(number_2, number_3), std::min(std::max(number_1, number_2), std::max(number_1, number_3)));
    
    int sum = maximum + greater_than_minimum;

    std::cout << "\nThe sum of the two largest numbers: " << sum;
    
}
