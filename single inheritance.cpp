#include<iostream>
using namespace std;

class A
{
	protected:
		int a=12;
};
class B: public A
{
	public:
		int get()
		{
			cout<<a;
		}		
};
int main()
{
	B obj;
	obj.get();
	return 0;
}
