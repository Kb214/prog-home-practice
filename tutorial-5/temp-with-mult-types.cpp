#include <iostream>

// template <typename T, typename U>
// void showPair(T a, U b) {
//     std::cout << a << " and " << b << "\n";
// }

template <typename T, typename U>

//teacher says he wouldn't suggest using this 
auto max(T a, U b) -> decltype(a > b ? a : b){

    if (a > b) return a;
    else return b;
}

int main(){
    // showPair(10, 3.5);
    // showPair("Alice", 42);

    max(3, 4.5);
    max(7,1.0f);
    max(1L, static_cast<short>(2));
    max(2L, static_cast<short>(1));
    max(444.4f, 222.2);

    return 0;
}