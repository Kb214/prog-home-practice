#include <iostream>
#include <string>
#include <fstream>
#include <limits>

double balance{0.00};

void deposit(double amount){
    std::cout << "\nDeposite Successful!\n";
    std::cout << "New Balance: $" << amount << "\n";
    
}
void deposit(double amount, std::string description){
    std::cout << "\nDeposite Successful!\n";
    std::cout << "Description: " << description << "\n";
    std::cout << "New Balance: $" << amount << "\n";

}

bool withdraw(double amount){
    std::cout << "\nWithdrawl Successful\n";
    std::cout << "NEW BALANCE: $" << amount << "\n";
    return true;
}
bool withdraw(double amount, std::string description){
    std::cout << "\nWithdrawl Successful\n";
    std::cout << "NEW BALANCE: $" << amount << "\n";
    std::cout << "Description: " << description << "\n"; 
    return true;
}

void saveBalance(const std::string& filename = "account.txt"){
    std::ofstream acc(filename);
    if (acc.is_open()){
        acc << balance << "\n";
        acc.close();
    }
}

double loadBalance(const std::string& filename = "account.txt"){
    double load{100.00};
    std::ifstream acc(filename);

    if (acc.is_open()){
        if(!(acc >> load)){
            load = 100.00;
        }
        acc.close();
    }else{
        saveBalance(filename);
    }

    balance = load;
    return balance;
}

int displayMenu(){
    std::cout << "================================\n" << "What do you want to do?\n" << "================================\n";
    std::cout << "1. Deposite Money\n2. Withdraw Money\n3. Check Balance\n4. Delete Account\n5. Exit\n";

    return 0;
}

double getBalance(){
    std::cout << "Your balance is $" << balance << "\n\n";
    return balance;
}

bool isValidWithdrawal(double amount){
    return amount <= balance && amount > 0;
}


int main() {
    int choice{};
    double money{};
    std::string desc;

    std::cout << "Hello this is your bank account!" << '\n'; 
    loadBalance();
    displayMenu();

    std::cout << "Your Choice: ";
    std::cin >> choice;
    
    while(choice != 4){

         if(choice == 1){

            std::cout << "\nYour Amount: $";
            std::cin >> money;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

            std::cout << "Your Description [Press Enter to Skip]: ";
            std::getline(std::cin, desc);

            balance += money; 
            saveBalance();

            if(desc.empty()){

                deposit(balance);
                std::cout << "|NO DESCRIPTION|\n\n";

            }else{

                deposit(balance, desc);

            }

        }else if(choice == 2){

            std::cout << "Your Withdrawl Amount: $";
            std::cin >> money; 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 


            std::cout << "Your Description [Press Enter to Skip]: ";
            std::getline(std::cin, desc);

            if(isValidWithdrawal(money)){
                balance -= money;
                saveBalance();

                if(desc.empty()){

                    withdraw(balance);

                    std::cout << "|NO DESCRIPTION|\n\n";
                
                }else{

                    withdraw(balance, desc);

                }
            }else{
                std::cout << "\n|!|Not enough money in account to withdraw. Please put money inside account.|!|\n\n";
            }
           


        }else if(choice == 3){
            getBalance();

        }else{

            std::cout << "\n||No choice available, choose numbers between 1-4||\n\n";

        }


        displayMenu();
        std::cout << "\nYour Choice: ";
        std::cin >> choice; 

    }
    
    std::cout << "\n||Goodbye! Come back again!||\n";
    return 0;


}