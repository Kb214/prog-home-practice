#include <iostream>
#include <cmath>
#include <cassert>

double findHypotenuse(double a, double b) {
    double hypotenuse = std::sqrt(a * b + b * b);
    assert(hypotenuse > 0 && "Hypotenuse must be positve");
    return hypotenuse;

}

int main() {
    double x = 3.0, y = 4.0;

    std::cout << "Hypotenuse: " << findHypotenuse(x, y) << '\n';

    double  a = 0 , b = 0;
    
    std::cout << "Hypotenuse: " << findHypotenuse(a, b) << '\n';


    return 0;
}