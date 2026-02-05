#include <iostream>

int main()
{
    // Define a variable, which will be multiplied by two
    int num{};

    // We ask the user to enter a number
    std::cout << "Enter a Integer: ";

    // Assing the number to the variable
    std::cin >> num;

    // calculating the result and printing the result in the same line
    std::cout << "Double that number is: " << num * 2 << '\n';

    return 0;
}