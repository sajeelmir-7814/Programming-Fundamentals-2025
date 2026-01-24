#include <iostream>
using namespace std;
int main() 
{
    int N;       
    int i = 1;    
    int sum = 0;  

    cout << "Enter a Number: ";
    cin >> N;     

    while(i <= N) {    
    sum = sum + i;  
    i++;      
    }
    cout << "Sum of first " << N << " natural numbers = " << sum << endl;
    return 0;
}

