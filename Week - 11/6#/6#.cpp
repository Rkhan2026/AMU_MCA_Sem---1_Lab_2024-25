#include <iostream> 
#include <string> 
using namespace std; 
 
class BankAccount { 

private: 
    string depositorName; 
    long accountNumber; 
    char accountType; 
    double balance; 
 
public: 
    BankAccount(string name, long accountNum, char type, double initialBalance) { 
        depositorName = name; 
        accountNumber = accountNum; 
        accountType = type; 
        balance = initialBalance; 
    } 
 
    void deposit(double amount) { 
        if (amount > 0) { 
            balance = balance + amount; 
            cout << "\nDeposit successful. New Balance : $ " << balance << endl; 
        } else { 
            cout << "\nInvalid Deposit Amount. Amount Must Be Greater Than 0." << endl; 
     } 
    } 
 
    void withdraw(double amount) { 
        if (amount > 0 && amount <= balance) { 
            balance = balance - amount; 
            cout << "\nWithdrawal Successful. New Balance : $ " << balance << endl; 
        } else { 
            cout << "Invalid Withdrawal Amount Or Insufficient Balance." << endl; 
        } 
    } 
 
    void displayAccountInfo() { 
        cout << "\nAccount Information --> \n"; 
        cout << "Depositor Name : " << depositorName << endl; 
        cout << "Account Number : " << accountNumber << endl; 
        cout << "Account Type : " << accountType << endl; 
        cout << "Balance : $ " << balance << endl; 
    } 
}; 
 
int main() { 
    string name; 
    long accountNum; 
    char accountType; 
    double initialBalance; 
 
    cout << "Enter Depositor's Name: "; 
    getline(cin, name); 
 
    cout << "Enter Account Number: "; 
    cin >> accountNum; 
 
    cout << "Enter Account Type (S For Savings, C For Current): "; 
    cin >> accountType; 
 
    cout << "Enter Initial Balance : $ "; 
    cin >> initialBalance; 
 
    BankAccount myAccount(name, accountNum, accountType, initialBalance); 
 
    int choice; 
    double amount; 
    
	cout << "\nMenu:\n"; 
    cout << "1. Display Account Information\n"; 
    cout << "2. Deposit\n"; 
    cout << "3. Withdraw\n"; 
    cout << "0. Exit\n"; 
	
	operations: 
    
	do { 
        cout << "\nEnter Your Choice: "; 
        cin >> choice; 
 
        switch (choice) { 
            case 1: 
                myAccount.displayAccountInfo(); 
                break; 
            
			case 2: 
                cout << "\nEnter amount to deposit: $"; 
                cin >> amount; 
                myAccount.deposit(amount); 
                break; 
            
			case 3: 
                cout << "\nEnter amount to withdraw: $"; 
                cin >> amount; 
                myAccount.withdraw(amount); 
                break; 
            
			case 0: 
                cout << "\nExiting program. Goodbye!\n"; 
                return 0; 
                break; 
            
			default: 
                cout << "\nInvalid Choice\n"; 
        } 
    } while (choice != 0); 
     
    goto operations; 
 
    return 0; 
}
