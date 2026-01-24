#include<iostream>
using namespace std;
int main()
{
	int arr[5]= {10,20,30,40,50};
	int N= sizeof (arr) / sizeof (arr[0]);
	cout<<"Array Elements: ";
	
	for (int i=0; i<N; i++){
	cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int sum=0;
	for(int i=0; i<N; i++){
	sum=sum+arr[i];
	}
	cout<<"Sum "<<sum<<endl;
	
	cout<<"Length of Array: "<<N <<endl;
	
	
	
	
	
	
	return 0;
}
