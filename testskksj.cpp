#include<iostream>
using namespace std;

class A
{
	public:
		int get()
		{
			cout<<"\nthis class of A";
		}
};
class B:public A
{
	public:
		int get()
		{
			cout<<"this class of B";
		}
};
int main()
{
	B obj;
	obj.get();
	obj.A::get();
	return 0;
}
