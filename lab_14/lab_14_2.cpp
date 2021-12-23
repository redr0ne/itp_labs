#include <iostream>
#include <cmath>

int main()
{
    
	int A = 0;
	int B = 1;

    while (!(A > B)) {
        std::cout << "\nВведите A: ";
        std::cin >> A;
        std::cout << "\nВведите B: ";
        std::cin >> B;
        
        if (!(A > B)) {
            std::cout << "\nA должно быть больше B";
        }
    }
    
    while (A > B){
        A -= B;
    }
    
    std::cout << "\nДлина незанятой части отрезка A: " << A;
    
}
