#include<iostream>
using namespace std;
class Bank
{
	public:
	int fun()
	{
		cout<<"hello\n";
	}	
	int fun12(int x)
	{
	 cout<<x;	
	}	
};
 int main()
 {
 	int value;
 	cout<<"enter the value";
 	cin>>value;
 	Bank b;
 	b.fun();
 	b.fun12(value);
 	return 0;
 	
 }
