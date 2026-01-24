#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age: "<<endl;
	cin>>age;
	
	(age<13) ? (cout<<"age " <<age <<" falls under the category: Child") :
	(age<19) ? (cout<<"age " <<age <<" falls under the category: Teenagers") : (cout<<"age " <<age <<" falls under the category: Adults");
	
	return 0;
}
