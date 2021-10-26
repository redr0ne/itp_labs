#include <iostream>
#include <cmath>

int main()
{
    
    int degrees_alpha = 360;
    
    while (!((0 < degrees_alpha) and (degrees_alpha < 360))) {

        std::cout << "\ninput alpha: ";
        std::cin >> degrees_alpha;

        if (!((0 < degrees_alpha) and (degrees_alpha < 360))) {
            std::cout << "\nalpha must be between 0 and 360";
        }
    }
    
    float radians_alpha = 0.0174533 * degrees_alpha;
    
    std::cout << "\nAlpha angle in radians: " << radians_alpha;
}
