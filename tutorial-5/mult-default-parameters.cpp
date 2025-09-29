#include <iostream>
#include <string>

void introduce(std::string name = "Guest", int age = 18) {
    std::cout << name << " is " << age << " years old.\n";

}

int main() {
    introduce();
    introduce("Bob");
    introduce("Charlie", 25);

    return 0; 
}
