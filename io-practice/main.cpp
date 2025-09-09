#include  <iostream>
#include <fstream>

//This code will be used to practice file input and output

int main(){
    std::ifstream file; //if stream is used for reading files
    file.open("file.txt");
    for(int i = 1; i <= 10; i++){
        int number;
        file >> number;
        std::cout << number << "\n";
    }

    file.close();

    std::ofstream file2; //Of stream is used for writing files
    file2.open("file2.txt");

    file2 << "I'm writing to a file!\n";
    file2 << "This is the second line!\n";

    file2.close();

    std::ifstream file2_read; //reads the file we just wrote, file2.txt
    file2_read.open("file2.txt");
    //Put the file name that yout want to read in the open function.
    //Before the the open function the put the if/of stream declaration. 
        //aka file2_read is the ifstream declaration. We are using it to read a ofstream file.

    std::string line;

    while (std::getline(file2_read,line)){ //gets the line until the end of the file.
        std::cout << line << "\n"; //Prints line out.
    }

    file2_read.close();
    
    return 0;
}