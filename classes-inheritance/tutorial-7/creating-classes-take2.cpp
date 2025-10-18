#include <iostream>
 
class Engine {
public:
    Engine() { std::cout << "Engine created!" << std::endl; }
};

class Animal {
private:
   
    Engine engine;

protected:
    int age;

public:

void speak() {
    std::cout << "Animal speaks" << std::endl;
}

Animal(int age = 10) : age(age) {}

void setAge(int a) { age = a; }
int getAge() { return age; }

friend void showAge(Animal a);


Animal operator+(Animal other) {
    return Animal(this->age + other.age);
}


};



void showAge(Animal a) {
    std::cout << "Age: " << a.age << std::endl;
}


class Dog : public Animal {
public:
    Dog(int age) : Animal(age) {}
 
    void showDogAge() {
        std::cout << "Dog age: " << age << std::endl;
    }
};
 
class A {
public:
    void show() { std::cout << "A" << std::endl; }
};
 
class B : public A {};
class C : public A {};
class D : public B, public C {};

int main() {
    Animal b;
    Animal c(11);
    Animal sum = b + c;

    showAge(sum);


    // Animal dog(5);
    // a.speak();
    Animal a;

    std::cout << a.getAge() << std::endl;

    Dog d(5);
    d.showDogAge();

    // D obj;
    // obj.show();


    return 0;
} 