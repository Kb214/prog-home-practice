#include "rectangle.h"
#include <iostream>
#include <memory>

std::weak_ptr<Rectangle> weak;



int main(){
    std::shared_ptr<Rectangle> r1 = std::make_shared<Rectangle>(10,10);
    std::shared_ptr<Rectangle> r2 = r1; 

    std::cout << "Use cout: " << r1.use_count() << "\n";
    r1.reset();

    std::cout << "After r1.reset(), use count: " << r2.use_count() << "\n";

    {
        auto shared = std::make_shared<Rectangle>(3,3);
        weak = shared;
        std::cout << "Inside block: expired = " << weak.expired() << "\n";

    }

    std::cout << "Outside block: expired = " << weak.expired() << "\n";

    return 0;
}

