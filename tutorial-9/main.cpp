#include "rectangle.h"
#include "unique_demo.cpp"

int main(){
    std::unique_ptr<Rectangle> rect1 = std::make_unique<Rectangle>(10,5);
    rect1->printArea();

    std::unique_ptr<Rectangle> rect3 = std::move(rect1);
    if (!rect1) std::cout << "rect1 is null after move\n";

    std::unique_ptr<Rectangle> rect2;
    createRectangle(rect2);
    rect2->printArea();

    return 0;
}