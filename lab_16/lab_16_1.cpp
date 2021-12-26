#include <iostream>
#include <cmath>

int main()
{
    int N = 0;
    while (!(N > 0)) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 0)) {
            std::cout << "\nN должно быть больше нуля";
        }
    }
    
    int array[N];

    int addition = 1;
    int count = 0;
    while (count <= N){
        array[count] = addition;
        count++;
        addition += 2;
    }
    
    std::cout << "\nПолучившийся массив: ";
    for (int i = 0; i < N; i++)
    {
        std::cout << array[i] << " ";
    }
    
}
