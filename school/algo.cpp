#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
//leave capture stuff alone, dont use mutable
//you can capture by reference, multiple, default
      //you could use '=' or '&'   in general though, avoid using it
//lambda expressions

int main(){
   //sorting things in a vector
   std::vector<int> nums{43,86,44,123,84,32};

   //use lambda expressions right away
   std::sort(nums.begin(),nums.end(), std::greater<int>());
      //could sort them in the std::less from less -> great.
      //you can make your own function in here like [](int a, int b){return a<b;}
                                                            // or like {return a%2<%2}

   //std::all_of = checking all of the numbers.
   for(int num : nums){
    std::cout << num << "\n";
   }

   


   return 0;
}