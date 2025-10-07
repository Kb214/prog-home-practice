#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    std::vector<int> values = {5,2,8,3,1};
    // std::sort(values.begin(), values.end(), [](int a, int b){return a > b;});
    std::sort(values.begin(), values.end(), [](int a, int b) { return a%2 < b%2;});
    //splits vector into a even side and an odd side.
    
    for (int v : values){
        std::cout << v << "  ";
    }

    return 0;
}