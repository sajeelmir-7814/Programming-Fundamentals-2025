#include<iostream>
using namespace std;
int main(){
	char signalcolour;
	cout<<"Enter the signal colour :";
	cin>>signalcolour;
	if ( signalcolour=='r'){
	cout<<"stop"<<endl;
	}
	if ( signalcolour=='g'){
	cout<<"Go"<<endl;
	}
	if ( signalcolour=='y'){
	cout<<"slowdown"<<endl;
	}
	return 0;
}
