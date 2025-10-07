#include <iostream>
#include <vector>

int main(){

    std::vector<int> nums = {1,2,3,4,5};

    for (auto it = nums.begin(); it != nums.end(); ++it){

        std::cout << *it << "\n";
    }

    return 0;
}