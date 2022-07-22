#include<iostream>
using namespace std;
class Person
{
	public:
	int age;
	float salary=3500.69;
};
int main()
{
	Person P1;
	
	cout<<"enter the age";
	cin>>P1.age;
	cout<<"Age = " <<P1.age<<endl<<"salary = "<<P1.salary;
	cout<<endl;
	return 0;
}
