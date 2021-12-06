#include <iostream>
#include <cmath>

int main()
{
    int K = 0, N = 0;
    
    while (!((K >= 1) and (K <= 365))) {
        std::cout << "\nInput K: ";
        std::cin >> K;
        
    if (!((K >= 1) and (K <= 365))) {
            std::cout << "\nK must be between 1 and 365";
        }
    }
    
    while (!((N >= 1) and (N <= 7))) {
        std::cout << "\nInput N: ";
        std::cin >> N;
        
    if (!((N >= 1) and (N <= 7))) {
            std::cout << "\nN must be between 1 and 7";
        }
    }
    
    int offset = N - 1;

    int week_number = (K + offset) / 7;
    
    int weekday_number;
    if (K + offset - (week_number * 7) != 0) {
        weekday_number = K + offset - (week_number * 7);
    } else {
        weekday_number = 7;
    }

    std::cout << "\nDay of the week for the K-th day of the year: " << weekday_number;
}
