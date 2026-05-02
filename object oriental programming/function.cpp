#include <iostream>
using namespace std;
struct student{
	string name;
	int rollno;
	float gpa;
	string semester;
	string programname;
	// ya avy tha
	float fee;
	void setfee(double s){
	fee=s;
	}
};

int main()
{
	student s1,s2;
	s1.name="Sajeel MiR";
	s1.rollno=29;
	s1.semester="2nd semester";
	s1.gpa=4.00;
	s1.programname="Computer Engineerinng Technology";
	
	s2.name="Khizar";
	s2.rollno=10;
	s2.semester="2nd semester";
	s2.gpa=4.00;
	s2.programname="Computer Engineerinng Technology";
	
    cout<<s1.name<<endl;
	cout<<s1.rollno<<endl;
	cout<<s1.semester<<endl;
	cout<<s1.gpa<<endl;
	cout<<s1.programname<<endl;
	
	cout<<s2.name<<endl;
	cout<<s2.rollno<<endl;
	cout<<s2.semester<<endl;
	cout<<s2.gpa<<endl;
	cout<<s2.programname<<endl;
	    	
	
	
	
	
	
	
	return 0;
}




















