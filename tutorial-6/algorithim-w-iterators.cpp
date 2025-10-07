#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main(){

    std::vector<int> values = {1,2,3,4,5};
    int sum = std::accumulate(values.begin(),values.end(),0);
    std::cout << "Sum: " << sum << "\n";

    std::for_each(values.begin(), values.end(), [](int n) {std::cout << n << " ";});
    
    return 0;
}