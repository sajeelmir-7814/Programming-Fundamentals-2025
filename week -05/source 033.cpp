#include <iostream>
using namespace std;
int main()
{
	int salary;
	int experince;
	cout<<" Enter your Salary: "<<endl;
	cin>>salary;
	cout<<" Enter your Experince: "<<endl;
	cin>>experince;
	
	if (salary==25000){
	cout<<" You are eligible for loan. ";}
	else if (salary==20000 && experince>=5){
	cout<<" You are eligible for loan.";}
	else {
	cout<<" You are Not eligible .";}
		
	
	
	
	
	
	return 0;
}
