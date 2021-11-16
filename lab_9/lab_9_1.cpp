#include <iostream>
#include <cmath>

int main()
{
    int N;

    std::cout << "\nInput N: ";
    std::cin >> N;

    int number_of_minutes = N / 60;
    int seconds_in_incomplete_minute = N - (number_of_minutes * 60);

    std::cout << "\nThe number of seconds in an incomplete minute: " << seconds_in_incomplete_minute;
}
