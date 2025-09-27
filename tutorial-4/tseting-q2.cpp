#include <iostream>

bool isEven(int n){
    return 1 - n % 2 ;
    //return n % 2 == 0;
    //return n % 2 < 1
}

int main(){
    std::cout << std::boolalpha << isEven(6) << '\n';
    return 0;
}