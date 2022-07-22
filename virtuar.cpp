#include<iostream>
using namespace std;

class A
{
	public:
		int a=500;
};
class B: public A
{
	public:
		int b=600;
};
class C: public A,public B
{
       public:
	       int c=100;	
};
int main()
{
	C obj;
    cout<<obj.a+obj.b+obj.c;
}
