#include <iostream>

class Animal{
public: 
    void speak(){
        std::cout << "Animal speaks\n";
    }
};

class Cat : public Animal {
public:
    void speak(){
        std::cout << "Meow\n";
    }

};

class Dog : public Animal {
public:
    void speak(){
        std::cout << "Woof\n";
    }

};

int main(){
    Animal* a1 = new Cat();
    Animal* a2 = new Dog();

    a1->speak();
    a2->speak();

    delete a1;
    delete a2; 

    /*This is incorrect behavior. since speak is not virtual
    the base class version is called even though the objects are Cat
    and Dog.*/
}