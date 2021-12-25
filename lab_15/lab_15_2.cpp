#include <iostream>
#include <cmath>

int Sign (float X){
    if (X < 0){
        return -1;
    }
    if (X == 0){
        return 0;
    }
    if (X > 0){
        return 1;
    }
    return 0;
}

int main()
{
    float A, B;
    
    std::cout << "\nВведите A: ";
    std::cin >> A;
    std::cout << "\nВведите B: ";
    std::cin >> B;
    std::cout << "Значение выражения Sign(A) + Sign(B): " << Sign(A) + Sign(B);
}
