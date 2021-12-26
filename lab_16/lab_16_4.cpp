#include <iostream>
#include <cmath>

int main()
{
    int N = 0;
    while (!(N > 0)) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 0)) {
            std::cout << "\nN должно быть больше двух";
        }
    }
    
    int A[N];

    for (int count = 1; count - 1 < N; count++){
        std::cout << "Введите " << count << " элемент массива: ";
        std::cin >> A[count - 1];
    }

    std::cout << "\nВывод элементов в установленном порядке: ";
    for (int count = 0; count < N; count++){
        std::cout << A[count] << " ";
        std::cout << A[N - 1 - count] << " ";
    }
    
}
