#include <queue> //FIFO
#include<stack> //Only add to the top. 
#include <deque> //like a list, but double ended queue 4%
#include <iostream>
#include <set> //like map but only keys
#include <vector> //use 95%
#include <map> //key value pairs
#include <string>
#include <list> //like vector but good for adding/removing stuff 1%


//42 blanks, need to store yellow, red, or blank 
//row = int vector
//6 rows, 7 columns
std::vector<std::vector<int>> board(6, std::vector<int>(7,0));
//a makeboard function that uses ^ as a data type
std::vector<std::vector<int>> makeBoard(int rows, int cols){
    return std::vector<std::vector<int>>(rows, std::vector<int>(cols,0));
}

void displayBoard(const std::vector<std::vector<int>>& board){

    for(const auto& row : board){

        for(const auto& col : row){
            std::cout << col << " ";
        }
        std::cout << "\n";
    }
}

int main(){

    auto baord = makeBoard(6,7);
    board.at(0).at(1) = 3; //Don't use []

    displayBoard(board);

    return 0;
}