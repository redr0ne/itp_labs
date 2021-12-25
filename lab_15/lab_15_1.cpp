#include <iostream>
#include <cmath>

float PowerA3 (float A){
    float B = A * A * A;
    return B;
}

int main()
{
    float number1, number2, number3, number4, number5;
    
    std::cout << "\nВведите первое число: ";
    std::cin >> number1;
    std::cout << "Третья степень этого числа: " << PowerA3(number1) << std::endl;
    
    std::cout << "\nВведите второе число: ";
    std::cin >> number2;
    std::cout << "Третья степень этого числа: " << PowerA3(number2) << std::endl;
    
    std::cout << "\nВведите третье число: ";
    std::cin >> number3;
    std::cout << "Третья степень этого числа: " << PowerA3(number3) << std::endl;
    
    std::cout << "\nВведите четвёртое число: ";
    std::cin >> number4;
    std::cout << "Третья степень этого числа: " << PowerA3(number4) << std::endl;
    
    std::cout << "\nВведите пятое число: ";
    std::cin >> number5;
    std::cout << "Третья степень этого числа: " << PowerA3(number5);
}
