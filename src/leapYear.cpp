#include <iostream>
#include <windows.h>

//given a year. Calculate if it is a leap year

int main()
{
    while(1)
    {
    system("cls");

    int year;

    std::cout << "Enter a year: " << std::endl;
    std::cin >> year;
    std::cout << std::endl;

    if (year % 4 != 0)
    {
        std::cout << "Not a leap year." << std::endl;
        Sleep(2000);
    }
    else if (year % 100 == 0 && year % 400 != 0)
    {
        std::cout << "Not a leap year" << std::endl;
        Sleep(2000);
    }
    else 
    {
        std::cout << "That is a leap year!" << std::endl;
        Sleep(2000);
    }
    }
}