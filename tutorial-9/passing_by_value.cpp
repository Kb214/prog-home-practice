#include "rectangle.h"

#include <memory>
#include <iostream>

void takeOwnership(std::unique_ptr<Rectangle> r) {
    r->printArea();
}

std::unique_ptr<Rectangle> makeRect(){
    return std::make_unique<Rectangle>(5,5);
}
 

int main(){
    auto rect = std::make_unique<Rectangle>(2,3);
    std::cout << "\n";
    takeOwnership(std::move(rect));
    std::cout << "\n";
    makeRect();

    return 0;
}