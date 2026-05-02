#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

class Account {
private:
    string accountNumber;
    double balance;

public:
    // Constructor (random account number generate)
    Account(double b) {
        balance = b;

        // random seed
        srand(time(0));

        // random account number
        accountNumber = "ACC" + to_string(rand() % 9000 + 1000);
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    double bal;

    cout << "Enter Balance: ";
    cin >> bal;

    Account acc1(bal);

    cout << "\nGenerated Account:\n";
    acc1.display();

    return 0;
}
