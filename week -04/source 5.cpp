#include <iostream>
using namespace std;
int main ()
{
	int balance;
	cout<<"Enter Amount: "<<endl;
	cin>>balance;
	
	
	(balance<100) ? (cout<<"The Account is considered as a low balance. ")<<endl :
		
	(balance>=100 && balance<=500) ? (cout<<"The Account is considered as a Standard Account. ")<<endl :
	 
	(cout<<"The Account is considered as a Premium Account. ") <<endl;
	
	bool loyal;
	cout<<"Enter your Amount for loyal coustomer. "<<endl;
	cin>>loyal;
	
	int specialoffer;
    (specialoffer=(balance>=200) && (loyal==1)) ? (cout<<"you are eligible for this offer.") : 
	(cout<<"Sorry! you are not eligible for this offer. ")<<endl;

	
	

	return 0;
}
