#include<iostream>
using namespace std;
int getmax()
{
	int a,b;
	
	cout<<" \nenter the value..";
	cin>>a>>b;
	
	if(a>b)
	{
		cout<<"max num A = "<<a;
	}
	else
	{
		cout<<"max num B = "<<b;
	}
}
int main()
{
	getmax();
	getmax();
	getmax();
	getmax();
	getmax();
	return 0;
}
