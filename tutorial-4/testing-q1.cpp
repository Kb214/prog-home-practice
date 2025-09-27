#include <iostream>

double add(double a, double b){
    return a + b;
}


int divide(int a, int b){
    if (b == 0){
        std::cout << "Error: Division by zero\n";
        return 0;
    }

    return a / b;
}

int main(){

    std::cout << "Test 1: " << ((add(2,3) == 5) ? "Pass" : "Fail") << ' ';
    std::cout << "Test 2: " << ((add(-1,1) == -2) ? "Pass" : "Fail") << ' ';
    std::cout << "Test 2: " << ((add(-1,-1) == -1.1f) ? "Pass" : "Fail") << '\n';

    std::cout << divide(10,2) << '\n';
    std::cout << divide(2,0) << '\n';
    return 0;

    
}

