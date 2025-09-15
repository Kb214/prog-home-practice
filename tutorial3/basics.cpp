#include <iostream>

int add(int a, int b);
int multiply(int a, int b, int result);

int main(){

    int result = add(5,3);
    std::cout << "Result: " << result << "\n";
    return 0;
}

int add(int a,int b){
    return a + b;
}

int multiply(int a, int b, int result){
    return a * b; 
}