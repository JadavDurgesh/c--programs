#include<iostream>
using namespace std;
class A
{
	private:
		int a=12;
		
	public:
		int getvalue1()
		{
			cout<<a<<endl;
		}
};
class B:public A
{
	private:
		int b=123;
	public:	
		int getvalue2()
		{
			cout<<b<<endl;
		}
};
class C: public B
{
	private:
		int c=1234;
    public:
    	int getvalue3()
    	{
    		cout<<c<<endl;
		}
};
int main()
{
	C obj;
	obj.getvalue1();
	obj.getvalue2();
	obj.getvalue3();
	return 0;
}
