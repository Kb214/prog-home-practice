#include <iostream>

class Fraction{

    int num{0}, den{1};

    public: 
    static int instances; 
    /*
    instances shared among the objects    
    */

    Fraction(int n, int d) : num(n), den(d){ ++instances; }
    /*
    The constructor that takes in integers n and d. 
    Has a initializer list with num and den. 
    every time you put in numbers for a fraction the instances go up.
    */

    friend std::ostream& operator<<(std::ostream& os, const Fraction& f){ /*overloads function with operator keyword. return_type operator<symbol>(parameters)*/
        return os << f.num << '/' << f.den;

        /*returns the output of numerator and denominator*/
    }

};

int Fraction::instances = 0;
/*
need this because: 
    Static members exist outside of any specific object
        Compiler doesn't allocate memory for static variable when you declare it inside the class.
            Define it separately (outside class or another file) --> Linker knows to allocate memory for it. 
*/

int main(){

    Fraction a(1,2);
    Fraction b(3,4);

    std::cout << "a:" << a << "\n";
    std::cout << "b: " << b << "\n";

    std::cout << "Instances: " << Fraction::instances << "\n";

    return 0;
}