#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string ownerName;
    int accountNumber;
    double balance;
public:
    // TODO: Default constructor
    BankAccount(){
        ownerName="Unknown";
        accountNumber=0;
        balance=0;
    }
    // TODO: Parameterized constructor
    BankAccount(string name, int accNum, double bal){
        ownerName=name;
        accountNumber=accNum;
        balance=bal;
    }
    // TODO: deposit function
    void deposit(double amount){
        if(amount>=0){
            balance+=amount;
            cout<<"Deposite $"<<balance<<" add to Accounnt:"<<accountNumber<<endl;
        }
    }
    // TODO: withdraw function
    void withdraw(double amount){
        if(amount<=0) {
            cout<<"Amount should be grather than 0"<<endl;
        }
        else if(amount>balance){
            cout<<"Insufficient funds in account "<<accountNumber<<endl;
        }
        else{
            balance-=amount;
            cout << "Withdrew $" << amount << " from Account:" << accountNumber << endl;
        }

    }

    // TODO: displayAccount function
    void displayAccount() const{
        cout<<"-------Welcome to bank account-------"<<endl;
        cout<<"Account Name:"<<ownerName<<endl;
        cout<<"Account Number:"<<accountNumber<<endl;
        cout<<"Balance:$"<<balance<<endl;
    }
};

int main() {
    // Create account with default constructor
    BankAccount acc1;

    // Create account with parameterized constructor
    BankAccount acc2("Sonika", 2025001, 150.0);

    // Deposit and withdraw
    acc1.deposit(100);
    acc1.withdraw(30);
    acc2.deposit(50);
    acc2.withdraw(200); // should fail if balance is insufficient

    // Display both accounts
    acc1.displayAccount();
    acc2.displayAccount();

    return 0;
}
