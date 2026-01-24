#include<iostream>
using namespace std;
int main()
{
	int L;
	cout<<"Enter the Length: ";
	cin>>L;
	
	int arr[L];
	for(int i=0; i<L; i++){
	cin>> arr[i];
	}
	
	int largest=arr[0];
	for(int i=1; i<L
	; i++){
	if(arr[i] > largest){
	largest=arr[i];
	}
	}
	
	cout<<"Largest Length = "<< largest;
	
	return 0;
}
