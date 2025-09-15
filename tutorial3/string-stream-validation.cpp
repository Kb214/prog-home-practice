#include <sstream>
#include <iostream>
#include <string>

bool isValidInteger(std::string input) {
    std::stringstream ss(input);
    int value;
    return (ss >> value) && ss.eof();
}

int main(){
    std::cout << isValidInteger("123") << "\n";
    std::cout << isValidInteger("12.5") << "\n";
    std::cout << isValidInteger("abc") << "\n";

    return 0;
}