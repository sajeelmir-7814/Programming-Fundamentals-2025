#include<iostream>
using namespace std;
int main(){
	int atm;
	float balance,withdrawlamount;
	cout<<"Enter your balance : $";
	cin>>balance;
	cout<<"Enter withdrawlamount:$";
	cin>>withdrawlamount;
	if (withdrawlamount<=balance){
	float remaining_balance=balance-withdrawlamount;
	cout<<"Withdrawl succesful.\n remaining balance:$"<<remaining_balance<<endl;	
	}
	else{
	cout<<"insufficient balance."<<endl;
	}
	return 0;
}
