#include<iostream>
using namespace std;

class A
{
	public:
		int a=12;
};
class B: public A
{
	public:
		int b=123;
};
class C :public B
{
	public:
		int c=12345;
};
int main()
{
	C obj;
	obj.a;
    obj.b;
    obj.c;
	return 0;
}
