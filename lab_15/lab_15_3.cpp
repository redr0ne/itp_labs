#include <iostream>
#include <cmath>

float RingS (float R1, float R2){
    return (3.14 * (R1 + R2) * (R1 - R2));
}

int main() 
{
    float R1 = 0, R2 = 1;
    while (!(R1 > R2)) {
        std::cout << "\nВведите R1: ";
        std::cin >> R1;
        std::cout << "\nВведите R2: ";
        std::cin >> R2;
        
        if (!(R1 > R2)) {
            std::cout << "\nR1 должно быть больше R2";
        }
    }
    std::cout << "\nПлощадь данного кольца: " << RingS(R1, R2);
    
    float R3 = 0, R4 = 1;
    while (!(R3 > R4)) {
        std::cout << "\nВведите R3: ";
        std::cin >> R3;
        std::cout << "\nВведите R4: ";
        std::cin >> R4;
        
        if (!(R3 > R4)) {
            std::cout << "\nR3 должно быть больше R4";
        }
    }
    std::cout << "\nПлощадь данного кольца: " << RingS(R3, R4);
    
    float R5 = 0, R6 = 1;
    while (!(R5 > R6)) {
        std::cout << "\nВведите R5: ";
        std::cin >> R5;
        std::cout << "\nВведите R6: ";
        std::cin >> R6;
        
        if (!(R5 > R6)) {
            std::cout << "\nR5 должно быть больше R6";
        }
    }
    std::cout << "\nПлощадь данного кольца: " << RingS(R5, R6);
    
}
