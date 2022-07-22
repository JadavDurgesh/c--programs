#include<iostream>
using namespace std;

class  Animal
{
	protected:
		int a=12;
};
class dog:public Animal
{
	public:
		int get()
		{
			cout<<"sjflk"<<a;
		}
};
class bel:public Animal
{
	public:
		int get5()
		{
			cout<<"\no............sad.";
		}
};
class cat
{
	public:
		int get2()
		{
			cout<<"\nentet the num";
		}
};
class chita:public cat
{
	public:
		int get3()
		{
			cout<<"\nirejfn";
		}
};
class lepad:public cat
{
	public:
		int get4()
		{
			cout<<"\n...kjsddjfjkj";
		}
};
int main()
{
       dog a;
       a.get();
       bel b;
       b.get5();
       chita c;
       c.get2();
       c.get3();
       lepad d;
       d.get4();
	   return 0;
}

