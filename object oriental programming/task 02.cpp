##include <iostream>
using namespace std;

class Account {
private:
    string accountNumber;
    double balance;

public:
    // Constructor
    Account(string a, double b) {
        accountNumber = a;
        balance = b;
    }

    // Display function
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string accNo;
    double bal;

    // User input
    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Balance: ";
    cin >> bal;

    // Object create
    Account acc1(accNo, bal);

    cout << "\nAccount Details:\n";
    acc1.display();

    return 0;
}
