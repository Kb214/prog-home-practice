#include <iostream>

class Engine{      
    public: 
        Engine(){ std::cout << "Engine created!" << "\n";}

};



class Animal {

    private:
       int age = 5;
       Engine engine;

    public:
        void speak(){
            std::cout << "Animal speaks" << "\n";
        }

        Animal(int age = 10) : age(age) {
            std::cout << "Animal created with age: " << age << "\n";
        }

        void setAge(int a) { age = a; }
        int getAge() { return age; }

        friend void showAge(Animal a);

        Animal operator+(Animal other) {
            return Animal(this->age + other.age);
        }

    protected:
        int age;
};


class Dog : public Animal{
    public: 
        Dog(int age) : Animal(age) {}

    void showDogAge(){
        std::cout << "Doge Age: " << age << "\n";
    }
};

void showAge(Animal a){
    std::cout << "Age: " << a.age << "\n";
}

int main(){
    // Animal a;

    // a.speak();
    // std::cout << a.getAge() << "\n";

    // // showAge(b);

    // Animal b;
    // Animal c(11);
    // Animal d = b + c;
    
    // std::cout <<  d.showAge() << "\n";
    // showAge(d);



    // return 0;

    
    Animal a;
    
    a.speak();
    std::cout << a.getAge() << "\n";

    Animal b;
    Animal c(11);
    Animal d = b + c;

    // call the free function, or use getAge()
    showAge(d);
    std::cout << "d age via getter: " << d.getAge() << "\n";

    Dog d(5);

    return 0;

}

