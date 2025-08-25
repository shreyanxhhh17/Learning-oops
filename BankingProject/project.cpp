/**
 * @file project.cpp
 * @author Shreyansh
 * @brief Project: Bank Account System
            Concepts covered:
            Class & Object
            Private data (encapsulation)
            Public methods (deposit, withdraw, check balance)
 * @date 2025-08-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using namespace std;

class BankAccount{
  private:
    string owner;
    double balance;
  public:
    // Constructor
    BankAccount(string name, int intialBalance){
      owner = name;
      balance = intialBalance>=0?intialBalance:0;
    }

    // Function to deposit money
    void deposit(double amount){
      if(amount>0){
        balance+=amount;
        cout<<"Deposited:"<<amount<<"| New Balance:"<<balance<<endl;
      }else{
        cout<<"Invalid amout";
      }
    }

    // Function to withdraw money
    void withdraw(double amount){
      if(amount>0 && amount<=balance){
        balance-=amount;
        cout<<"Withdrawn:"<<amount<<"| New Balance:"<<balance<<endl;
      }else{
        cout<<"Insufficient amount";
      }
    }

    // Show account
    void showAccount(){
      cout<<"Owner:"<<owner<<"| Account Balance:"<<balance<<endl;
    }
};

// Driver Code

int main(){
  BankAccount acc("Emma",10000);

  acc.showAccount();
  acc.deposit(500);
  acc.withdraw(1000);
  acc.deposit(2000);
  acc.showAccount();
}
