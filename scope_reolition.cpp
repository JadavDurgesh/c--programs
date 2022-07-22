#include<iostream>
using namespace std;

class x
{
	public:
    int a,b;
	
	int fun(int x)
	{  
	     a=x;
	     b=x;
     	cout<<" = A "<<a<<" = B "<<b;
     }
};
int main()
{
	x ojs;
	cin>>ojs.x::b;
	cout<<ojs.x::b;
	ojs.x::fun(12);
	return 0;
}
