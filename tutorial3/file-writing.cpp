#include <fstream>
#include <iostream>

int main(){
    std::ofstream output("test.txt");
    
    if (output.is_open()){
        output << "Hello World" << "\n";
        output << 42 << "\n";
        output.close();
        std::cout << "File written successfully" << "\n";
    }else{
        std::cout << "Could not open file" << "\n";
    }

    return 0;
}