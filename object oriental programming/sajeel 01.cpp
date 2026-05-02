#include <iostream>
using namespace std;

class Account {
private:
    string account_Number;
    double balance;

public:
    Account(string a, double b) {
    account_Number = a;
    balance = b;
    }

    Account operator + ( Account a) {
    string newAccNo = "Combined_" + account_Number;
    double newBalance = balance + a.balance;
    return Account(newAccNo, newBalance);
    }

  
    void display() {
    cout << "Account Number: " << account_Number << endl;
    cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc1("A101", 5000.50);
    Account acc2("A102", 3000.75);

    Account acc3 = acc1 + acc2;

    cout << "First Account:\n";
    acc1.display();

    cout << "\nSecond Account:\n";
    acc2.display();

    cout << "\nCombined Account:\n";
    acc3.display();

    return 0;
}
