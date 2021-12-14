#include <iostream>
#include <cmath>

int main()
{
    int number = 0;
    
    while (!((number > 999 and number < 10000) or (number > -10000 and number < -999))) {
        std::cout << "\nEnter a four-digit number: ";
        std::cin >> number;
        
    if (!((number > 999 and number < 10000) or (number > -10000 and number < -999))) {
            std::cout << "\nNumber must be four-digit";
        }
    }
    
    int number_abs = abs(number);
    int number_1 = number_abs % 10;
    int number_2 = ((number_abs / 10) % 10);
    int number_3 = ((number_abs / 100) % 10);
    int number_4 = (number_abs / 1000);
    
    if ((number_1 == number_4) and (number_2 == number_3)) {
        std::cout << "\nThe number is read the same from left to right and from right to left";
    } else {
        std::cout << "\nThe number is NOT read equally from left to right and from right to left";
    }
    
}
