#include <fstream>
#include <iostream>

int main(){
    std::ifstream input("nonexistent.txt");

    if(input.is_open()){
        std::cout << "File opened successfully" << "\n";
        input.close();
    } else{
        std::cout << "File could not be opened" << "\n";
    }

    return 0;
}