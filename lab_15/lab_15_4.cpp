#include <iostream>
#include <cmath>

int Quarter (float x, float y){
    if ((x > 0) and (y > 0)) {
        return 1;
    } else if ((x < 0) and (y > 0)) {
        return 2;
    } else if ((x < 0) and (y < 0)) {
        return 3;
    } else if ((x > 0) and (y < 0)) {
        return 4;
    }
    return 0;
}

int main() 
{
    float x1 = 0, y1 = 0;
    while (!(x1 != 0)) {
    	std::cout << "\nВведите x1: ";
    	std::cin >> x1;
        
        if (!(x1 != 0)) {
            std::cout << "\nx1 не должно быть нулём";
        }
    }
    while (!(y1 != 0)) {
    	std::cout << "\nВведите y1: ";
    	std::cin >> y1;
        
        if (!(y1 != 0)) {
            std::cout << "\ny1 не должно быть нулём";
        }
    }
    std::cout << "\nНомер координатной четверти для данной точки: " << Quarter(x1, y1);
    
    float x2 = 0, y2 = 0;
    while (!(x2 != 0)) {
    	std::cout << "\nВведите x2: ";
    	std::cin >> x2;
        
        if (!(x2 != 0)) {
            std::cout << "\nx2 не должно быть нулём";
        }
    }
    while (!(y2 != 0)) {
    	std::cout << "\nВведите y2: ";
    	std::cin >> y2;
        
        if (!(y2 != 0)) {
            std::cout << "\ny2 не должно быть нулём";
        }
    }
    std::cout << "\nНомер координатной четверти для данной точки: " << Quarter(x2, y2);
    
    float x3 = 0, y3 = 0;
    while (!(x3 != 0)) {
    	std::cout << "\nВведите x3: ";
    	std::cin >> x3;
        
        if (!(x3 != 0)) {
            std::cout << "\nx3 не должно быть нулём";
        }
    }
    while (!(y3 != 0)) {
    	std::cout << "\nВведите y3: ";
    	std::cin >> y3;
        
        if (!(y3 != 0)) {
            std::cout << "\ny3 не должно быть нулём";
        }
    }
    std::cout << "\nНомер координатной четверти для данной точки: " << Quarter(x3, y3);
    
}
