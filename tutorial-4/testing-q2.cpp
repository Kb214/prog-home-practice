#include <iostream>
#include <stdexcept>

void checkValue(int x){
    if (x < 0){
        throw std::runtime_error("Negative value error");
    }
    std::cout << "Valid number: :" << x << '\n';
}

int main(){
    try{
        checkValue(5);
        checkValue(-1);

    }catch (const std::exception& e){
        std::cout << "Caught: " << e.what() << '\n';
    }

    return 0;
}