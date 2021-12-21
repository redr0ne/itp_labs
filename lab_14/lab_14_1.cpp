#include <iostream>
#include <cmath>

int main()
{
    
	int A = 1;
	int B = 0;

    while (!(A < B)) {
        std::cout << "\nВведите A: ";
        std::cin >> A;
        std::cout << "\nВведите B: ";
        std::cin >> B;
        
        if (!(A < B)) {
            std::cout << "\nA должно быть меньше B";
        }
    }
    
    for (int current_number = A; current_number <= B; current_number++){
        for (int count = 1; count <= current_number; count++){
            std::cout << "\n" << current_number;
        }
    }
    
}
