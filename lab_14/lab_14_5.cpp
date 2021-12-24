#include <iostream>
#include <cmath>

int main()
{
    
	int A = 0;
	int B = 0;

    while (!(A > 0)) {
        std::cout << "\nВведите A: ";
        std::cin >> A;
        
        if (!(A > 0)) {
            std::cout << "\nA должно быть больше нуля";
        }
    }
    
    while (!(B > 0)) {
        std::cout << "\nВведите B: ";
        std::cin >> B;
        
        if (!(B > 0)) {
            std::cout << "\nB должно быть больше нуля";
        }
    }
    
    while (A != 0 and B != 0){
        if (A > B){
            A = A % B;
        } else {
            B = B % A;
        }
    }
    
    std::cout << "\nНаибольший общий делитель: " << A + B;
    
}
