#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream input("test.txt");
    std::string line;

    if (input.is_open()){
        while (std::getline(input, line)){
            std::cout << "Read: " << line << "\n";
        }
        input.close();
    }else{
        std::cout << "Could not open file" << "\n";
    }

    return 0;
}