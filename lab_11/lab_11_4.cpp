#include <iostream>
#include <cmath>

int main()
{
	int x = 0;
	int y = 0;


    while (!(x != 0)) {
    	std::cout << "\nInput x: ";
    	std::cin >> x;
        
    if (!(x != 0)) {
            std::cout << "\nX must not be zero";
        }
    }
    
    while (!(y != 0)) {
    	std::cout << "\nInput y: ";
    	std::cin >> y;
        
    if (!(y != 0)) {
            std::cout << "\nY must not be zero";
        }
    }

    if ((x > 0) and (y > 0)) {
        std::cout << "\nThe point is in the first quarter";
    } else if ((x < 0) and (y > 0)) {
        std::cout << "\nThe point is in the second quarter";
    } else if ((x < 0) and (y < 0)) {
        std::cout << "\nThe point is in the third quarter";
    } else if ((x > 0) and (y < 0)) {
        std::cout << "\nThe point is in the fourth quarter";
    }
}
