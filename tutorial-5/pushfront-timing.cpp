#include <iostream>
#include <list>
#include <deque>
#include <chrono>
#include <vector>
//use vector for most things (85%)
//if you need to add or remove on both ends, use a deque (10%)
//if you need to add and remove from the middle, use a list(<5%)
 
int main() {
    const int N = 100'000;

    std::vector<int> v;
    std::list<int> l;
    std::deque<int> d;

    auto start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; ++i) v.insert(v.begin(), i);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Vector: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "ms\n";

    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) l.push_front(i);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "List: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "ms\n";

    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) d.push_front(i);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Deque: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "ms\n";

    return 0;
    
}