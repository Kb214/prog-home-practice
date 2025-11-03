#include "rectangle.h"

#include <memory>
#include <iostream>

void createRectangle(std::unique_ptr<Rectangle>& ptr){
    ptr = std::make_unique<Rectangle>(7,4);
}

std::unique_ptr<Rectangle> makeRect() {
    return std::make_unique<Rectangle>(5, 5);
}


int main(){
    std::unique_ptr<Rectangle> rect1 = std::make_unique<Rectangle>(10,5);
    rect1->printArea();
    std::cout << "\n";

    std::unique_ptr<Rectangle> rect3 = std::move(rect1);
    if (!rect1) std::cout << "rect1 is null after move\n";
    std::cout << "\n";

    std::unique_ptr<Rectangle> rect2;
    createRectangle(rect2);
    rect2->printArea();
    std::cout << "\n";


    // Rectangle* raw = new Rectangle(4, 3);
    // std::unique_ptr<Rectangle> badPtr(raw); // BAD!

    auto goodPtr = std::make_unique<Rectangle>(4, 3); 
    std::cout << "\n";

    createRectangle(rect2);
    std::cout << "\n";




    return 0;
}