#include <iostream>
using namespace std;

int main() {
    int *ptr =NULL;

    if(ptr == NULL) {
        cout << "Pointer is NULL and does not point to valid memory." << endl;
    } else {
        cout << "Pointer holds address: " << ptr << endl;
    }

    return 0;
}
