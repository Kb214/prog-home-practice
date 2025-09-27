#include <iostream>

int main(){
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Invalid input cleared!\n";

    }
    return 0;
}