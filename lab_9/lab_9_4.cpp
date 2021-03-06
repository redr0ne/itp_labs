#include <iostream>
#include <cmath>

int main()
{
    int A = -1, B = -1, C = -1;
    
    while (!(A > 0)) {
        std::cout << "\nInput A: ";
        std::cin >> A;
        
    if (!(A > 0)) {
            std::cout << "\nA must be positive";
        }
    }
    
    while (!(B > 0)) {
        std::cout << "\nInput B: ";
        std::cin >> B;
        
    if (!(B > 0)) {
            std::cout << "\nB must be positive";
        }
    }
    
    while (!(C > 0)) {
        std::cout << "\nInput C: ";
        std::cin >> C;
        
    if (!(C > 0)) {
            std::cout << "\nC must be positive";
        }
    }
    
    int filled_area = ((A / C) * C) * ((B / C) * C);

    int unoccupied_area_of_the_rectangle = A * B - filled_area;
    
    int number_of_squares = filled_area / (C * C);

    std::cout << "\nNumber of squares in a rectangle: " << number_of_squares;
    std::cout << "\nUnoccupied area of the rectangle: " << unoccupied_area_of_the_rectangle;
}
