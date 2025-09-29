#include <iostream>

struct Point {
    int x;
    int y;

    friend std::ostream& operator <<(std::ostream& os, const Point& p){
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

template<typename T>
void display(T value) {
    std::cout << "Value: " << value << "\n";
}

int main() {

    display(42);
    display(3.14);
    display("Hello");

    display(Point{3, 4});
    return 0;

}