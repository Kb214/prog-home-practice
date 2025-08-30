#include <iostream>

//Your Bank Account

/* want to withdraw from bank, deposit and see amount */


int main(){

    double options;
    double amount{0};

    std::cout << "|====___Welcome to Bank of America!___====|\n \n";
    std::cout << "Here are your options:\n" << "1. WITHDRAW\n2. DEPOSIT\n3. SEE ACCOUNT\n4. APPLY FOR CD\n";

    std::cout << "What do you want to do?: ";
    std::cin >> options;

    if(options == 1){
        std::cout << "Enter your withdrawl amount: ";
        std::cin >> amount;
    }else if(options == 2){
        std::cout << "Enter your deposit amount: ";
    }else if(options == 3){
        std::cout << "This is your total amount of money.\n";
        std::cout << "====|A M O U N T|====\n" << "$ " << amount << "\n";
    }else if(options == 4){

    }

}