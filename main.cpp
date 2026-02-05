#include <iostream>

int getValueFromUser()
{
    // Define a variable, which will be multiplied by two
    int num{};

    // We ask the user to enter a number
    std::cout << "Enter a Integer: ";

    // Assing the number to the variable
    std::cin >> num;
    return num;
}

void printDouble(int value)
{
    // calculating the result and printing the result in the same line
    std::cout << "Double that number is: " << value * 2 << '\n';
}

int main()
{

    int num{getValueFromUser()};

    printDouble(num);

    return 0;
}