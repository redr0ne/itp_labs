#include <iostream>
#include <cmath>

int main()
{
    int number = 0;
    
    while (!((number > 99 and number < 1000) or (number > -1000 and number < -99))) {
        std::cout << "\nEnter a three-digit number: ";
        std::cin >> number;
        
    if (!((number > 99 and number < 1000) or (number > -1000 and number < -99))) {
            std::cout << "\nNumber must be three-digit";
        }
    }
    
    int number_abs = abs(number);
    int number_1 = number_abs % 10;
    int number_2 = ((number_abs / 10) % 10);
    int number_3 = (number_abs / 100);
    
    if (((number_3 < number_2) and (number_2 < number_1)) or ((number_1 < number_2) and (number_2 < number_3))){
        std::cout << "\nDigits of a number form an ascending or descending sequence";
    } else {
        std::cout << "\nDigits of a number do not form an ascending or descending sequence";
    }
    
}
