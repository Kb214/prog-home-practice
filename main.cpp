#include <iostream>

//Your Bank Account

/* want to withdraw from bank, deposit and see amount */


struct account{
    double amount;
};

void withdrawl(account &acc, double value){
    if(value > acc.amount){
        std::cout << "Not Enough Money in Account\n";
    }
    acc.amount -= value;
    
}

void deposit(account &acc, double value){
    acc.amount += value;
}

int main(){

    double options;
    double amount;

    std::cout << "|====___Welcome to Bank of America!___====|\n \n";
    std::cout << "Here are your options:\n" << "1. WITHDRAW\n2. DEPOSIT\n3. SEE ACCOUNT\n4. APPLY FOR CD\n";

    std::cout << "What do you want to do?: ";
    std::cin >> options;

    if(options == 1){
        std::cout << "Enter your withdrawl amount: ";
        std::cin >> amount;

        // withdrawl(amount);

        std::cout << "Your Current Balance" << amount << "\n";

    }else if(options == 2){
        std::cout << "Enter your deposit amount: ";
        std::cin >> amount;

        // deposit(amount);

        std::cout << "Your current Balance:" << amount << "\n";

    }else if(options == 3){

        std::cout << "This is your total amount of money.\n";
        std::cout << "====|A M O U N T|====\n" << "$ " << amount << "\n";

    }else if(options == 4){

        std::cout << "What is your name?";
        
    }else{
        std::cout << "===___|EXITING|___===";
    }

    return 0;

}