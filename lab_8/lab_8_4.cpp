#include <iostream>
#include <cmath>

int main()
{
    int number = 100;
    
    while (!((number < 100) and (number > 9))) {
        
        std::cout << "\nEnter a two-digit number: ";
        std::cin >> number;
        
    if (!((number < 100) and (number > 9))) {
            std::cout << "\nThe number must be two-digit";
        }
    }
    
    int swap = (number / 10) + (number % 10) * 10;
    
    std::cout << "\nNumber obtained by swapping digits: " << swap;
}
