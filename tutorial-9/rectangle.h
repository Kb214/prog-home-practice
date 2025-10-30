#pragma once
#include <iostream>

class Rectangle{
public:
Rectangle(int w, int h) : width(w), height(h) {
    std::cout << "Rectangle constructed: " << width << "X" << height << "\n";
}

~Rectangle(){
    std::cout << "Rectangle destructed: " << width << "x" << height << "\n";
}

void printArea() const {
    std::cout << "Area: " << width * height << "\n";
}

private: 
int width;
int height; 

};


