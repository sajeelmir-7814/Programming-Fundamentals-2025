#include <iostream>
using namespace std;
int main ()
{
	int N;
	cout<<"Enter the Number: ";
	cin>> N;
	
	int arr[N];
	for (int i=0; i<N; i++){
	cin>> arr[i];
	}
	
	int sum=0;
	for (int i=0; i<N; i++){
	sum =sum + arr[i];
	}
	
	float average=(float)sum/N;
	cout<<"Sum: "<<sum <<"\n"<<"Average: "<<average;

	return 0;
}
