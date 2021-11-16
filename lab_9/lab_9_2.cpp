#include <iostream>
#include <cmath>

int main()
{
    int K = 0;
    
    while (!((K >= 1) and (K <= 365))) {
        std::cout << "\nInput K: ";
        std::cin >> K;
        
    if (!((K >= 1) and (K <= 365))) {
            std::cout << "\nK must be between 1 and 365";
        }
    }

    int week_number = K / 7;
    int weekday_number = K - (week_number * 7);

    std::cout << "\nDay of the week for the K-th day of the year: " << weekday_number;
}
