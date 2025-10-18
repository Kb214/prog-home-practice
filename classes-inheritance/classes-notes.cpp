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


struct Base{
    void speak()const{ std::cout << "woof" << "\n"; }
    /*
    a function that returns nothing has no parameters.; Modifies the object. 
    */
};

struct Dervied : public Base{}; //as-is relationship
/*
    defines new struct and inherits it to base.
*/

/*
    Protected is accessible in derived
    for data intended for derived classes. 
*/


int Fraction::instances = 0;
/*
need this because: 
    Static members exist outside of any specific object
        Compiler doesn't allocate memory for static variable when you declare it inside the class.
            Define it separately (outside class or another file) --> Linker knows to allocate memory for it. 
*/


// struct B{};

// struct D : B{ //Initializes B first the D

//     D() : B(), a(1), b(a){} //Constructor with Initializer

//     //Data members
//     int a; 
//     int b; 

//     /*
//         if -->  int b; --> Initialized before we know what a is
//                 int a; --> set to 1

//             UNDEFINED BEHAVIOR
//     */

// };


struct B{

    virtual void draw()const; 
    //allows function to be overridden
};

struct D : B{
    void draw() const override; 
    //overrides function in B
};

void render(const B& obj){
    //reference to be and makes a instance named obj
    //Calls what ever draw we need from either B or D.
    /*
        Since D derives from B, it will call which ever one we need. and render it. 
    */
    obj.draw();
}


int main(){

    B b;
    D d; 

    render(b);
    render(d); //calls d draw and not b draw because "d" is of D

    Dervied d; 

    // d.speak();

    Fraction a(1,2);
    Fraction b(3,4);

    std::cout << "a:" << a << "\n";
    // std::cout << "b: " << b << "\n";

    std::cout << "Instances: " << Fraction::instances << "\n";

    return 0;
}