#include <iostream>

int main()
{
    int favoriteNumber;
    std::cout << "Enter your favorite number between 1-100\n";
    std::cin >> favoriteNumber;
    
    std::string favoriteNumberResponse = "Amazing " + std::to_string(favoriteNumber) + " is my favorite number!";
    
    std::cout << "No way that is my favorite number too!\n";
    // std::cout << favoriteNumberResponse << std::endl;
    
    std::cout << "Amazing " << favoriteNumber << " is my favorite number!";

    return 0;
}
