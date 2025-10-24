#include <iostream>

class Animal {
    public:
    virtual ~Animal(){
        std::cout << "Animal destroyed\n";
    }
};

class Cat : public Animal {
    public:
    ~Cat() {
        std::cout << "Meow\n";
    }
};

class Dog : public Animal {
    ~Dog() {
        std::cout << "Woof\n";
    }
};

int main(){
    Animal* a = new Cat();
    delete a; //Ensures cat's destructor is called

    Animal* b = new Dog(); //calls boths animal and cat
    delete b; 

    Animal* c = new Animal(); //just calls animal  
    delete c; 

    return 0;
}