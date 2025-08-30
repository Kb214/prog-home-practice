#include <iostream>

//Your Bank Account

/* want to withdraw from bank, deposit and see amount */


struct account{
    double amount;
};

void withdrawl(account &acc, double value){
    if(value > acc.amount){
        std::cout << "Not Enough Money in Account\n";
        std::cout << "current amount: $" << acc.amount << "\n";
        return;
    }
    acc.amount -= value;
    std::cout << "Withdrew: $" << value << "\n";
    std::cout << "Current Amount: $" << acc.amount << "\n";
    
}

void deposit(account &acc, double value){
    if(value < 0){
        std::cout << "Cannot Deposit Amount\n";
        return;
    }

    acc.amount += value;
    std::cout << "Deposited: $" << value << "\n";
    std::cout << "Current Amount: $" << acc.amount << "\n";
}

void account_loop(account &acc){
    double options;
    double amount;

    std::cout << "Here are your options:\n" << "1. WITHDRAW\n2. DEPOSIT\n3. SEE ACCOUNT\n4. APPLY FOR CD\n";

    std::cout << "What do you want to do?: ";
    std::cin >> options;

    if(options == 1){
        std::cout << "Enter your withdrawl amount: ";
        std::cin >> amount;

        withdrawl(acc, amount);
        account_loop(acc);

    }else if(options == 2){
        std::cout << "Enter your deposit amount: ";
        std::cin >> amount;

        deposit(acc, amount);
        account_loop(acc);
        // deposit(amount);


    }else if(options == 3){

        std::cout << "This is your total amount of money.\n";
        std::cout << "====|A M O U N T|====\n" << "$ " << acc.amount << "\n";
        account_loop(acc);

    }else if(options == 4){

        std::cout << "What is your name?";
        
    }else{
        std::cout << "===___|EXITING|___===";
    }
       
}
    

int main(){

    double options;
    double amount;
    account acc;
    acc.amount = 0.0;

    std::cout << "|====___Welcome to Bank of America!___====|\n \n";
    std::cout << "Here are your options:\n" << "1. WITHDRAW\n2. DEPOSIT\n3. SEE ACCOUNT\n4. APPLY FOR CD\n";

    std::cout << "What do you want to do?: ";
    std::cin >> options;

    if(options == 1){
        std::cout << "Enter your withdrawl amount: ";
        std::cin >> amount;

        withdrawl(acc, amount);
        account_loop(acc);
        // withdrawl(amount);


    }else if(options == 2){
        std::cout << "Enter your deposit amount: ";
        std::cin >> amount;

        deposit(acc, amount);
        account_loop(acc);
        // deposit(amount);


    }else if(options == 3){

        std::cout << "This is your total amount of money.\n";
        std::cout << "====|A M O U N T|====\n" << "$ " << acc.amount << "\n";
        account_loop(acc);

    }else if(options == 4){

        std::cout << "What is your name?";
        
    }else{
        std::cout << "===___|EXITING|___===";
    }

    return 0;

}