#include <iostream>
class Animal{
    public: 
    virtual void speak(){
        std::cout << "Animal speaks\n";
    }
};

class Cat : public Animal {
    public: 
    void speak() override {
        std::cout << "Meow\n";
    }

};

class Dog : public Animal {
    public: 
    void speak() override {
        std::cout <<  "Woof\n";
    }
};

int main(){
    Cat c; 

    // Animal a = c; /*Animal slicing happens here*/
    Animal& a = c; /*This works*/
    a.speak();

    

}