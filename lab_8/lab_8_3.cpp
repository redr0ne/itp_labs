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

    int unoccupied_A = A - (A / B) * B;

    std::cout << "\nThe length of the unoccupied part of the segment A: " << unoccupied_A;
}
