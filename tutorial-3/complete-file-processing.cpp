#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

int main(){
    std::ofstream out("student.txt");
    out << "Alice 85 92 78" << "\n";
    out << "Bob 90 88 95" << "\n";
    out.close();
    
    //read and process the file
    std::ifstream in("student.txt");
    std::string line;

    while (std::getline(in, line)){
        std::stringstream ss(line);
        std::string name;
        int grade1, grade2, grade3;

        ss >> name >> grade1 >> grade2 >> grade3;
        int average = (grade1 + grade2 + grade3) / 3;
        
        std::cout << name << ": " << average << "\n";
    }

    return 0;
}