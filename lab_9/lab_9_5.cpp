#include <iostream>
#include <cmath>

int main()
{
    int year = -1;
    
    while (!(year > 0)) {
        std::cout << "\nInput the year: ";
        std::cin >> year;
        
    if (!(year > 0)) {
            std::cout << "\nYear number must be positive";
        }
    }
    
    int century = (year + 99) / 100;
    
    std::cout << "\nCentury number: " << century;
}
