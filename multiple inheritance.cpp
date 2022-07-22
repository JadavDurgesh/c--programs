#include<iostream>
using namespace std;

class A
{
    public:
        int getA()
        {
        	cout<<"class A"<<endl;
		}
};
class B
{
    public:
        int getB()
        {
        	cout<<"class B"<<endl;
		}
};
class C
{
    public:
        int getC()
        {
        	cout<<"class C"<<endl;
		}
};
class D : public A,public B,public C
{
    public:
        int getD()
        {
        	cout<<"class D"<<endl;
		}
};
int main()
{
	D obj;
	obj.getA();
	obj.getB();
	obj.getD();
	obj.getC();
	return 0;
}
