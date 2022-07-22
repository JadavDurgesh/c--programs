#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		A(int x)
		{
			a=x;
			cout<<a<<endl;
		}
		A(A&r1)
		{
	    	cout<<r1.a<<endl;
		}
};
int main()
{
	A obj(120);
    A obj2(obj);
    A obj3(obj);
    A obj4(obj);
	return 0;
}
