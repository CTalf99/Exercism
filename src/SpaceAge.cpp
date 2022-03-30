#include<iostream>

double planetAge (int seconds, char planet)
{
    bool valid = true;
    double earthYear = (seconds/1000000)*31.69;

    switch (planet)
    {
        case('m'):
            return earthYear/0.2408467;
            break;
        case('v'):
            return earthYear/0.61519726;
            break;
        case('e'):
            return earthYear;
            break;
        case('M'):
            return earthYear/1.8808158;
            break;
        case('j'):
            return earthYear/11.862615;
            break;
        case('s'):
            return earthYear/29.447498;
            break;
        case('u'):
            return earthYear/84.016846;
            break;
        case('n'):
            return earthYear/164.79132;
            break;

    }
}

int main()
{
    bool valid = true;
    do{
    int seconds;
    char planet;

    std::cout << "Enter your age in seconds:" << std::endl;
    std::cin >> seconds;
    system("cls");
    std::cout << "Which planet do you live on?" << std::endl;
    std::cout << "m: Mercury" << std::endl;
    std::cout << "v: Venus" << std::endl;
    std::cout << "e: Earth" << std::endl;
    std::cout << "M: Mars" << std::endl;
    std::cout << "J: Jupiter" << std::endl;
    std::cout << "S: Saturn" << std::endl;
    std::cout << "u: Uranus" << std::endl;
    std::cout << "N: Neptune" << std::endl;
    std::cin >> planet;

    system("cls");

    if (!(planetAge(seconds, planet) > 0 ))
    {
        std::cout << "invalid input. Please try again." << std::endl;
        valid = false;
    }
    else{
    std::cout << "You are " << planetAge(seconds, planet) << " years old" << std::endl;
    }
    system("pause");
    system("cls");
    } while (valid);
    return 0;
}