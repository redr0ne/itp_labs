#include <iostream>
#include <cmath>

int main()
{
	int number = 0;

    while (!(number > 0 and number < 1000)) {
        std::cout << "\nEnter a number from 1 to 999: ";
        std::cin >> number;
        
    if (!(number > 0 and number < 1000)) {
            std::cout << "\nNumber must be from 1 to 999";
        }
    }

    if ((number > 0 and number < 10) and number % 2 == 0){
        std::cout << "\nSingle even number";
    } else if ((number > 0 and number < 10) and number % 2 == 1){
        std::cout << "\nSingle odd number";
    } else if ((number > 9 and number < 100) and number % 2 == 0){
        std::cout << "\nTwo-digit even number";
    } else if ((number > 9 and number < 100) and number % 2 == 1){
        std::cout << "\nTwo-digit odd number";
    } else if ((number > 99 and number < 1000) and number % 2 == 0){
        std::cout << "\nThree-digit even number";
    } else if ((number > 99 and number < 1000) and number % 2 == 1){
        std::cout << "\nThree-digit odd number";
    }

}
