#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	float avg;
	char grade1,grade2,grade3;
	cout<<" Enter Numbers for a: ";
	cin>> a;
    cout<<" Enter Numbers for b: ";
    cin>>b;
    cout<<" Enter Numbers for c: ";
    cin>>c;
	if (a>=90) grade1='A';
	else if ((a>=80 && a<90)) grade1='B';
	else if ((a>=70 && a<80)) grade1='C';
	else if ((a>=60 && a<70)) grade1='D';
	else grade1='F';
	
	if (b>=90) grade2='A';
	else if ((b>=80 && b<90)) grade2='B';
	else if ((b>=70 && b<80)) grade2='C';
	else if ((b>=60 &&  b<70)) grade2='D';
	else grade2='F';
	
	if (c>=90)grade3='A';
	else if ((c>=80 && c<90)) grade3='B';
	else if ((c>=70 && c<80)) grade3= 'C';
	else if ((c>=60 &&  c<70)) grade3= 'D';
	else grade3= 'F';

   	if (grade1=='F' || grade2=='F' || grade3=='F'){
	cout<<" Failed (F) in the subject. ";}
	int total= a+b+c;
	avg=total/3.0;
	cout<<"\n Subject 1 grade: "<<grade1<<endl;
	cout<<" Subject 2 grade: "<<grade2<<endl;
	cout<<" Subject 3 grade: "<<grade3<<endl;
	cout<<" Total Marks: "<<total<<endl;
	cout<<" Percentage: "<<avg<<endl;
	
	if (grade1=='A' && grade2=='A' && grade3=='A'){
	cout<<" Eligible for Merit Scholarship ";}
	
	
	
	
	
	
	
	
	return 0;
}
