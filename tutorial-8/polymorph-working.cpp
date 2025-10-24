#include <iostream>

class Animal{
    public:
    virtual void speak(){
        std::cout << "Animal speaks/n";
    }
};

class Cat : public Animal {
    public:
    void speak() override{
        std::cout << "Meow\n";
    }
};

class Dog : public Animal {
    public:
    void speak() override{
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

}