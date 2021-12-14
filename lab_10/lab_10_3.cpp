#include <iostream>
#include <cmath>

int main()
{
    int number = 0;
    
    while (!(number > 0)) {
        std::cout << "\nEnter a positive number: ";
        std::cin >> number;
        
    if (!(number > 0)) {
            std::cout << "\nNumber must be positive";
        }
    }
    
    if ((number > 9) and (number < 100) and (number % 2 == 0)){
        std::cout << "\nThis number is an even two-digit number";
    } else {
        std::cout << "\nThis number is not an even two-digit number.";
    }
    
}
