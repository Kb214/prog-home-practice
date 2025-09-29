#include <iostream>
#include <string>

void show(int a, int b = 5, int c = 10) {
    std::cout << a << " " << b << " " << c << "\n";

}

int main(){
    show(1, 2);
    return 0;
}