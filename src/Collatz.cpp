#include <iostream>
#include <windows.h>

//Collatz conjecture - Enter a number, n. 3n + 1 if odd, n/2 if n is even. Return number of steps to get to 1.

int main ()
{
    int n;
    int steps = 0;
    std::string restart = "Y";

    while(restart == "Y" || restart == "y")
    {
    system("cls");
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n/2;
            steps++;
        }
        else
        {
            n = 3*n + 1;
            steps++;
        }
    }
    std::cout << "It took " << steps << " steps to reach 1." << std::endl;
    steps = 0;
    Sleep(3000);
    system("cls");
    std::cout << "Would you like to enter another number (Y/N)?" << std::endl;;
    std::cin >> restart;
    }
    return 0;
}