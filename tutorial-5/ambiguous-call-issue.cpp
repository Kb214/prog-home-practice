#include <iostream>
#include <string>

void test(int x = 1, double y = 2.5) {
    std::cout << "First function\n";
}

//when you call the test() function, the first one wll override the second
//lets define the x in the test() function again
void test(double x) {
    std::cout << "Second function\n";
}

// void test(double x = 4.5) {
//     std::cout << "Second function\n";
// }
//There will be a compile error when we call test now.

int main() {
    test();
    return 0;
}