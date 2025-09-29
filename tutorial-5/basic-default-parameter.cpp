#include <iostream>

void greet(std::string name = "Guest") {
    std::cout << "Hello, " << name << "!\n";

}

int main(){

    greet();
    greet("Alice");
    return 0;

}

