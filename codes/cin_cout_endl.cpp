#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    int y{};
    std::cin >> x >> y; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}