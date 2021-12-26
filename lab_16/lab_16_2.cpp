#include <iostream>
#include <cmath>

int main()
{
    int N = 0;
    while (!(N > 1)) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 1)) {
            std::cout << "\nN должно быть больше единицы";
        }
    }
    
    int A;
    std::cout << "\nВведите A: ";
    std::cin >> A;
    
    int D;
    std::cout << "\nВведите D: ";
    std::cin >> D;
    
    int array[N];
    
    int count = 0;
    while (count < N){
        array[count] = A * pow(D, count);
        count++;
    }
    
    std::cout << "\nПолучившийся массив: ";
    for (int i = 0; i < N; i++){
        std::cout << array[i] << " ";
    }
    
}
