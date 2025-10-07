#include <iostream>
#include <vector>
#include <iterator>

int main(){
    std::vector<int> numbers = {10,20,30,40,50};
    auto it = numbers.begin();
    auto nextIT = std::next(it, 2);

    std::cout << "Next number: " << *nextIT << "\n";

    return 0;
}