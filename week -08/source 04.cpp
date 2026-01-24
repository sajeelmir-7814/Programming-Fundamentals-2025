#include<iostream>
using namespace std;
int main()
{
    int a;
    double USD, total;
    cout<<" 1-USD to PKR:\n";
    cout<<" 2-USD to INR:\n";
    cout<<" 3-USD to EURO:\n";
    cout<<" Enter the currency you want to convert: ";
    cin>>a;
    
    cout<<" Enter amount to convert from USD: ";
    cin>>USD;
    
    switch (a){
    case 1:
    total= USD * 280;
    cout<<" Your Amount: "<<total;
    break;
    case 2:
    total= USD * 89.99;
	cout<<" Your Amount: "<<total;
	break;
	case 3:
	total=USD * 0.85;
	cout<<" Your Amout: "<<total;
	break;
	default:
	cout<<" Error !"<<endl; 
}
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

