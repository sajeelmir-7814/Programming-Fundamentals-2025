#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; 
    double withdraw_Amount;
    char choice = 'y';

    cout << "Your balance is: $" << balance << endl;

    while (choice == 'y') {
    cout << "Enter the amount to withdraw: $";
    cin >> withdraw_Amount;

    if (withdraw_Amount > 0) {
    if (withdraw_Amount <= balance) {
    balance -= withdraw_Amount;
    cout << "You have successfully withdrawn $" << withdraw_Amount << endl;
    cout << "Remaining balance: $" << balance << endl;
    } else {
    cout << "Insufficient balance! You can withdraw up to $" << balance << endl;
    }
   } else {
    cout << "Invalid amount! Enter a positive number." << endl;
    }

    cout << "Do you want to withdraw again? (y/n): ";
    cin >> choice;
    }

    cout << "Final balance: $" << balance << endl;

    return 0;
}


