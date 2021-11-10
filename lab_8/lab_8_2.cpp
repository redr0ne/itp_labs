#include <iostream>
#include <cmath>

int main()
{
    int A = 0, B = 1;
    
    while (!(A > B)) {
        std::cout << "\nInput A: ";
        std::cin >> A;
        
        std::cout << "\nInput B: ";
        std::cin >> B;
        
    if (!(A > B)) {
            std::cout << "\nA must be more than B";
        }
    }

    int number_of_B = A / B;

    std::cout << "\nNumber of segments of length B: " << number_of_B;
}
