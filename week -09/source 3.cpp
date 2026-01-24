#include<iostream>
using namespace std;
int main()
{
	int num;
	int i=1;
	cout<<"Enter the Positive Number= ";
	cin>> num;
	
	while (i>num){
	cout<<" Error input positive number."<<endl;
	cin>>num;
	i++;
	}
	cout<<num <<" is positive  "<<endl;
	
	return 0;
}
