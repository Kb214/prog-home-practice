#include <iostream>

class Animal {
    public: 
    virtual void speak() = 0; //pure vitural 
    virtual ~Animal() = default; 
    
};

class Cat : public Animal {
    public: 
    void speak() override {
        std::cout << "Meow\n";
    }
};

// class Dog : public Animal {
//     public: 
//     void speak() override {
//         std::cout << "Woof\n";
//     }
// };

std::ostream& operator<<(std::ostream& os, Animal& a) {
    a.speak();
    return os;
}

int main(){
    Cat c; 
    std::cout << c; //prints meow

    Animal* a1 = new Cat();
    a1->speak();
    delete a1;
    
    return 0;
}