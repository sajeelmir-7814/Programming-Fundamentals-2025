#include<iostream>
using namespace std;
int main()
{
	int N,sum;
	cout<<"Enter the Number: ";
	cin>> N;
	
	for(int i=1; i<=N; i++){
	sum=sum+i;
	}
	cout<<"Sum of Natural Number From 1 to "<<N <<" is = "<< sum<<endl;
	
	return 0;
}
