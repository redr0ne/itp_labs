#include <iostream>
#include <cmath>

int main()
{
    
	int N = 0;

    while (!(N > 0)) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 0)) {
            std::cout << "\nЧисло должно быть больше нуля";
        }
    }
    
    int square = 0;
    
    for (int count = 1; count <= N; count++){
        square += (2 * count - 1);
        std::cout << "\nТекущее значение суммы: " << square;
    }
    
    std::cout << "\n\nКвадрат числа N: " << square;
    
}
