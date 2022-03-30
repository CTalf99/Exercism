#include <iostream>
#include <cstring>

char again = 'Y';


int main()
{
    while (again == 'Y' || again == 'y')
    {
    std::string string;
    std::string revString;

    std::cout << "Enter a word: " << std::endl;
    std::cin >> string;
    std::cout << std::endl;
    std::cout << "Reversed word:" << std::endl;

    for (int i = 0; i < string.length(); i++)
    {
        revString[i] = string[string.length()-i-1];
        std::cout << revString[i];
    }
    std::cout << std::endl;    
    system("pause");
    system("cls");


    std::cout << "Enter another word?(Y) Quit?(Any other key)" << std::endl;
    std::cin >> again;
    system("cls");
    }
}