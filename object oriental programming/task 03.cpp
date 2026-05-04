#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

class Account {
private:
    string accountNumber;
    double balance;

public:
    Account(double b) {
        balance = b;

        
        srand(time(0));

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
