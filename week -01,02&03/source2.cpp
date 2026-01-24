#include <iostream>
using namespace std;
int main()
{
	cout<<"\t TASK 01\n";
	//declaring and initilazing variables.
	int x1=3;
	int x2=6;
	int y1=4;
	int y2=8;
	
	int Formula=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	cout<<"The squared distance between (3,4) and (6,8) is:"<<Formula<<endl;
	
	cout<<"\t TASK 02\n";
	//declaring and initilazing  variables.
	float item1=12.95;
	float item2=24.95; 
	float item3=6.95; 
	float item4=14.95;
    float item5=3.95;
    //dispalying the price of items in screen.
	cout<<"price of item 1:"<<"$"<<"12.95\n";
	cout<<"price of item 2:"<<"$"<<"24.95\n";
	cout<<"price of item 3:"<<"$"<<"6.95\n";
	cout<<"price of item 4:"<<"$"<<"14.95\n";
	cout<<"price of item 5:"<<"$"<<"3.95\n";
	//formula.
	float sum= item1 + item2 + item3 + item4 + item5;
	cout<<"Subtotal:"<<"$"<<sum<<endl;
	//display the sale tax
	float subtotal=63.75;
	float div=  subtotal /  100 * 6;
	cout<<"Sale Tax(6%):"<<"$"<<div<<endl; 
	//displaying total amount.
	float sub=63.75;
    float  tax=3.825;
	float total=sub+ tax;
	cout<<"Total:"<<"$"<<total<<endl;
	 
	cout<<"\t TASK 03\n";
	float scorce1=85.5;
    float scorce2=90.75;
    float scorce3=88.25;
	//formula.
    float average=(scorce1+scorce2+scorce3)/3;
	cout<<"The average of "<<scorce1<<" , "<<scorce2<<" and "<<scorce3<<" = "<<average<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
