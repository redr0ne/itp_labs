#include <iostream>
#include <cmath>

int main()
{
    int weight_in_bytes;

    std::cout << "\nInput file weight in bytes: ";
    std::cin >> weight_in_bytes;

    int weight_in_kilobytes = weight_in_bytes / 1000;

    std::cout << "\nFull kilobytes in the file: " << weight_in_kilobytes;
}
