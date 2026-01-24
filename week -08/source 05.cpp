#include <iostream>
using namespace std;
int main()
{
	int a ,item,quantity;
	double price,total,discount,final_bill;
	cout<<" 1- Electronics\n";
	cout<<" 2- Clothing\n";
	cout<<" 3- Groceries\n";
	cout<<" Choose the category of the Items: ";
	cin>> a;
	
	switch(a){
	case 1:
	cout<<" 1.Laptop ($1000)\n";
	cout<<" 2.Smartphone ($700)\n";
	cout<<" 3.Headphone ($150)\n";
	cout<<" select item: ";
	cin>> item;
	if (item==1) price=1000;
	else if (item==2) price=700;
	else if (item==3) price=150;
	else {
	cout<<" Invalid Input ";
	}
	break;
	case 2:
	cout<<" 1.Jacket ($120)\n";
	cout<<" 2.T-shirt($40)\n";
	cout<<" 3.Jeans($60)\n";
	cout<<" select item: ";
	cin>> item;
	if (item==1) price=120;
	else if (item==2) price=40;
	else if (item==3) price=60;
	else {
	cout<<" Invalid Input ";
	}
	break;
	case 3:
	cout<<" 1.Milk (1 Liter - $2)\n";
	cout<<" 2.Brand (1 Loaf- $3)\n";
	cout<<" 3.Eggs (1 Dozan - $5)";
	cout<<" select item: ";
	cin>> item;
	if (item==1) price=2;
	else if (item==2) price=3;
	else if (item==3) price=5;
	else {
	cout<<" Invalid Input ";
	}
	break;
	default:
	cout<<" Error ! ";
	}
	
	cout<<" Enter Quantity: ";
	cin>> quantity;
	total= price*quantity;
	
	if (total<100)	discount=0;
	else if(total>=100 && total>=500) discount=total*0.10;	
	else 
	discount=total*0.20;
	
	final_bill=total-discount;
	
	cout<<" Price per item: $ "<< price<<endl;
	cout<<" Quantity per item: $ "<< quantity<<endl;
	cout<<" Total Amount: $ "<< total<<endl;
	cout<<" Discount: $ "<< discount<<endl;
	cout<<" Final Bill: $ "<<final_bill<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
