#include  <iostream>
#include  <vector> 

int main(){
    std::vector<int> numbers = {1,2,3,4,5};
    std::vector<int>::iterator it = numbers.begin();
    std::cout << "First Element: " << *it << "\n";

    return 0;
}