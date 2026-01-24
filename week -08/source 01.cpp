#include<iostream>
using namespace std;
int main ()
{
	int first, second;
	char op;
	cout<<" Enter 1st Number: ";
	cin>> first;
	cout<<" Enter Operator: ";
	cin>> op;
	cout<<" Enter 2nd Number: ";
	cin>> second;
	
	switch (op){
	case '+':
	cout<<first<<" + "<< second <<" = "<<first + second<<endl;
	break;
	case '-':
	cout<<first<<" - "<< second <<" = "<<first - second<<endl;
	break;
	case '*':
	cout<<first<<" * "<< second <<" = "<<first * second<<endl;
	break;
	case '/':
	cout<<first<<" / "<< second <<" = "<<first / second<<endl;
	break;
	default:
	cout<<" Invalid Input. "<<endl;

	}
	
	return 0;
}
