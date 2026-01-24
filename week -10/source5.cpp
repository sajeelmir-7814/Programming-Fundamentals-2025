#include<iostream>
using namespace std;
int main()
{
	int fact;
	double all=1;
	
	cout<<"Enter the Number: ";
	cin>> fact;
	
	if (fact<0){
	cout<<"Factorial of the Negative Number is not defined. "<<endl;	
	}
	else{
		
	for(int i=1; i<=fact; i++){
	all=all*i;
	}
	cout<<"Factorial = "<<all <<endl;
	}
	
	return 0;
}

