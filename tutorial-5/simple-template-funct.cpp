#include <iostream>

struct Point {
    int x;
    int y;
};

//This template inserts the value for you so you wont have to make multiple functions.
template<typename T>
void display(T value) {
    std::cout << "Value: " << value << "\n";

}

int main(){
    display(42);
    display(3.14);
    display("Hello");
    // display(Point{3,4}); --> this will automatically be an error

    return 0;

}