#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,marks,percentage;
	char g1,g2,g3;
	cout<<" Enter the marks of subject # 01: "<<endl;
	cin>>s1;
	cout<<" Enter the marks of subject # 02: "<<endl;
	cin>>s2;
	cout<<" Enter the marks of subject # 03: "<<endl;
	cin>>s3;
	
	if (s1>=90) g1='A';
	else if (s1>=80) g1='B';
	else if (s1>=70) g1='C';
	else if (s1>=60) g1='D';
	else g1= 'F';
	
	if (s2>=90) g2='A';
	else if (s2>=80) g2='B';
	else if (s2>=70) g2='C';
	else if (s2>=60) g2='D';
    else g2='F';
    
    if (s3>=90) g3='A';
    else if (s3>=80) g3='B';
    else if (s3>=70) g3='C';
    else if (s3>=60) g3='D';
    else g3= 'F';
    
    if (g1== 'F' || g2 == 'F' || g3== 'F'){
    cout<<" \n Result: Failed ";
	}
	int total;
	total = s1+s2+s3;
	percentage= total/3.0;
	cout<<" Grade subject 1: "<<g1<<endl;
	cout<<" Grade subject 2: "<<g2<<endl;
	cout<<" Grade subject 3: "<<g3<<endl;
	
	if (g1== 'A' && g2=='A' && g3 =='A'){
	if (total>=270)
	cout<<" Scholarship: Merit Scholarship ";
	else
	cout<<" Scholarship: Not Eligible "	;
	}
	else if (g1>='B' && g2>='B' && g3>='B'){
	if (total >=240)
	cout<<" Scholarship: Regular Scholarship ";
	else 
	cout<<" scholarship: Not Eligible "	;}
	else {
	cout<<" Scholarship: Not Eligible. ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
