#include <iostream>
#include <cmath>

int main()
{
    int A_x;
    int A_y;
    int B_x;
    int B_y;
    int C_x;
    int C_y;

    std::cout << "\nInput the x coordinate of point A: ";
    std::cin >> A_x;

    std::cout << "\nInput the y coordinate of point A: ";
    std::cin >> A_y;

    std::cout << "\nInput the x coordinate of point B: ";
    std::cin >> B_x;

    std::cout << "\nInput the y coordinate of point B: ";
    std::cin >> B_y;

    std::cout << "\nInput the x coordinate of point C: ";
    std::cin >> C_x;

    std::cout << "\nInput the y coordinate of point C: ";
    std::cin >> C_y;

    float length_AC = sqrt(pow(A_x - C_x, 2) + pow(A_y - C_y, 2)); //Calculates length according to the Pythagorean theorem
    float length_BC = sqrt(pow(B_x - C_x, 2) + pow(B_y - C_y, 2));
    float sum_of_lengths = length_AC + length_BC;

    std::cout << "\nSection length AC: " << length_AC;
    std::cout << "\nSection length BC: " << length_BC;
    std::cout << "\nSum of lengths: " << sum_of_lengths;
}
