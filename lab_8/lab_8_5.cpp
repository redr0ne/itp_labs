#include <iostream>
#include <cmath>

int main()
{
    int number = 1000;
    
    while (!((number < 1000) and (number > 99))) {
        
        std::cout << "\nEnter a three-digit number: ";
        std::cin >> number;
        
    if (!((number < 1000) and (number > 99))) {
            std::cout << "\nThe number must be three-digit";
        }
    }
    
    int swap = (number / 100) + (number % 100) * 10;
    
    std::cout << "\nNumber obtained by swapping number: " << swap;
}
