#include <sstream>
#include <iostream>
#include <string>

int main(){
    std::string data = "";
    std::stringstream ss(data);

    std::string name;
    int age;
    double value;

    ss >> name >> age >> value;
    std::cout << "Data: " << data << "\n";
    std::cout << "Name: " << name;
    std::cout << ", Age: " << age;
    std::cout << ", Value: " << value << '\n';

    return 0;
}