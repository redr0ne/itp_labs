#include <iostream>

int main()
{
    int a;
    int b;

    std::cout << "Input a: ";
    std::cin >> a;

    std::cout << "Input b: ";
    std::cin >> b;


    float average = (a + b) / 2;

    std::cout << "\nAverage is: " << average;
}
