#include <iostream>

int add(int a, int b){
    std::cout << "Interger add called" << "\n";
    return a + b;
}

double add(double a, double b){
    std::cout << "double and called" << "\n";
    return a + b;
}

int main(){
    std::cout << add(3,4) << "\n";
    std::cout << add(3.5, 4.2) << "\n";

    std::cout << add(3.0f,4.0f) << "\n";
    // std::cout << add(3L, 4L) << "\n";
    return 0;
}