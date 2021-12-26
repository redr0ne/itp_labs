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
    
    std::cout << "\nЭлементы с нечетными номерами в порядке возрастания: ";
    for (int i = 1; i - 1 < N; i++){
        if (i % 2 == 1){
            std::cout << A[i - 1] << " ";
        }
    }
    
    std::cout << "\nЭлементы с четными номерами в порядке убывания: ";
    for (int i = N; i - 1 > 0; i--){
        if (i % 2 == 0){
            std::cout << A[i - 1] << " ";
        }
    }
    
}
