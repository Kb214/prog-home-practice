#include <iostream>
#include <memory>

struct Node{
    std::weak_ptr<Node> next;
    // auto sp = weak.lock(); //don't know how to make this valid. 

    Node() {std::cout << "Node construced\n";}
    ~Node() {std::cout << "Node destructed\n";}
};

int main() {
    auto a = std::make_shared<Node>();
    auto b = std::make_shared<Node>();

    a->next = b;
    b->next = a;
}