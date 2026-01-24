#include<iostream>
using namespace std;
int main()
{
	string username,password,role;
	cout<<" Enter username: ";
	cin>> username;
	cout<<" Enter password: ";
	cin>> password;
	
	if (username== "admin" && password== "12345"){
	cout<<" Authentication Successful!. "<<endl;
	
	cout<<" Enter your Role: ";
	cin>> role;
	if (role== "admin"){
	cout<<" Full Access. "<<endl;
	}
	else if (role=="guest"){
	cout<<" Limited Access. "<<endl;
	}
	else {
	cout<<" Custom Access. "<<endl;
	}}
else{
	cout<<" Authentication Failed. Access Denied. "<<endl;
}	
	
	
	
	
	
	
	
	
	
	return 0;
}
