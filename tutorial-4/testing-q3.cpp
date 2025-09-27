#include <iostream>

int main(){
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (std::cin.fail()){
        std::cout << "Invalid input detected\n";

    }else{
        std::cout << "You entered: " << num << '\n';
    }
    return 0;
}