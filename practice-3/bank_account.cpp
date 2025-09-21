#include <iostream>
#include <string>
#include <fstream>
#include <limits>

void deposit(double amount){

    std::cout << "\nDeposite Successful!\n";
    std::cout << "New Balance: " << amount << "\n";

}
void deposit(double amount, std::string description){

    std::cout << "\nDeposite Successful!\n";
    std::cout << "Description: " << description << "\n";
    std::cout << "New Balance: $" << amount << "\n";

}

bool withdraw(double amount){

    std::cout << "\nWithdraw Successful!\n";
    std::cout << "NEW BALANCE: " << amount << "\n";
    return true;

}
bool withdraw(double amount, std::string description){

    std::cout << "\nWithdraw Successful!\n";
    std::cout << "Description: " << description << "\n";
    std::cout << "NEW BALANCE: $" << amount << "\n";
    return true;

}


void saveBalance(const std::string& filename = "account.txt");

double loadBalance(const std::string& filename = "account.txt");

int displayMenu(){

    std::cout << "================================\n" << "What do you want to do?\n" << "================================\n";
    std::cout << "1. Deposite Money\n2. Withdraw Money\n3. Check Balance\n4. Exit\n";
    return 0;
    
}

double getBalance();

bool isValidWithdrawal(double amount);



int main() {
    int choice{};
    double money{};
    std::string desc{};
    double balance{};

    std::cout << "Hello this is your bank account!" << '\n'; 
    displayMenu();

    std::cout << "Your Choice: ";
    std::cin >> choice;
    
    while(choice != 4){
         if(choice == 1){
            std::cout << "\nYour Amount: $";
            std::cin >> money;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

            std::cout << "Your Description [press enter to skip]: ";
            std::getline(std::cin, desc);
            
            balance += money;

            if(desc.empty()){

                deposit(balance);
                std::cout << "|NO DESCRIPTION|\n\n";

            }else{
                deposit(balance, desc);
            }

        }else if(choice == 2){

            std::cout << "Your Withdraw Amount: $";
            std::cin >> money;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Your Description: ";
            std::getline(std::cin, desc);

            balance -= money;

            if(desc.empty()){

                withdraw(balance);
                std::cout << "|NO DESCRIPTION|\n\n";

            }else{
                withdraw(balance, desc);
            }

        }else if(choice == 3){
            // getBalance();
        }else{
            std::cout << "\n||No choice available, choose numbers between 1-4||\n\n";
        }

    displayMenu();
    std::cout << "\nYour Choice: ";
    std::cin >> choice; 
    }

    std::cout << "\n||Goodbye!||\n";
    return 0;
}