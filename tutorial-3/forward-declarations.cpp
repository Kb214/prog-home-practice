#include <iostream>


//foward declaration
int calculate(int x);

int main(){
    int result = calculate(5);
    std::cout << "Result: " << result << "\n";
    return 0;
}

//function definition 
int calculate(int x){
    return x * 2 + 1;
}