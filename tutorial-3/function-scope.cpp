#include <iostream>

int globalVar = 10;

void testFunction() {
    int localVar = 5;
    std::cout << "Gobal: " << globalVar << "\n";
    std::cout << "Local: " << localVar << "\n";
}

int main(){
    int localVar = 20;
    testFunction();
    std::cout << "Main local: " << localVar << "\n";
    return 0;
}