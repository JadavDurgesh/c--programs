#include<iostream>
using namespace std;

class A
{
	public:
		int value;
		int get(int v)
		{
			value=v;
		}
		A operator++()
		{
			value=value+100;
		}
		void get2()
		{
			cout<<value<<endl;
		}
};
int main()
{
	A obj;
	obj.get(5);
    ++obj;
    obj.get2();
	return 0;
}
