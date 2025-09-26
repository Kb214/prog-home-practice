#include <iostream>

#include <queue> //FIFO
#include<stack> //Only add to the top. 
#include <deque> //like a list, but double ended queue 4%

#include <set> //like map but only keys
#include <vector> //use 95 percent
#include <map> //key value pairs
#include <string>
#include <list> //like vector but good for adding/removing stuff 1%

int main(){
    //list is kind of a crappy vector. if you're adding stuff alot, you could use this.
    //want to insert stuff in the middle of a vector? use a list.
    //Getting items all the time and don't know how many you're getting. 

    std::list<int> list ={1,2,3,4,5};
    auto it = list.end();
    std::cout << *it <<"\n";
    list.push_back(6);

    std::cout << *it <<"\n";

    std::map<std::string, std::string> dictionary;
    //you put in a string and it prints a string

    dictionary["hello"] = "greeting";
    dictionary["bye"] = "farewell";  
    dictionary["yes"] = "affirmative";
    dictionary["banana"] = "yellow fruit";

    if(dictionary.find("hello") != dictionary.end()){
        std::cout << "Found: " << dictionary["hello"] << "\n";
    }else{
        std::cout << "Not Found\n";
    
    std::map<int, std::string> reversePhoneLookup;
    //key [] then value ""
    
    reversePhoneLookup[1234567890] = "John Doe";
    reversePhoneLookup[5555555555] = "Alice Johnson";

    if(reversePhoneLookup.find(1234567890) != reversePhoneLookup.end()){
        std::cout << "Found: " << reversePhoneLookup[1234567890] << "\n";
    }else{
        std::cout << "Not Found\n";
    }

    std::cout << reversePhoneLookup[5555555555] << "\n";

    std::set<int> s; //maps don't care about order [kind of a lie, they are stored in trees] if you want something unordered then put
    //unordered_set or unordered_map
    s.insert(4);
    s.insert(3);
    s.insert(1);
    s.insert(4);

    for(auto i : s){
        std::cout << i << "\n";
    }

    return 0;
}