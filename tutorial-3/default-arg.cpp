#include <iostream>
#include <string>

void greet(std::string name, int times = 1, char punctuation = '!'){
    for(int i = 0; i < times; i ++) {
        std::cout << "Hello " << name << punctuation << " ";
    }

    std::cout << "\n";
}

int main(){
    greet("Alice");
    greet("Bob", 2);
    greet ("Charlie", 3, '?');

    return 0;
}