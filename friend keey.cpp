#include<iostream>
using namespace std;

class niles
{
	protected:
		int a=50;
	public:
	    friend void durgesh(niles n1);	
};
class jaydip
{
      protected:
	       int b=50;
	  public:
	     friend void durgesh(jaydip n2);	
};
 void durgesh(niles n,jaydip n2)
      {
      	cout<<n.a<<n1.b;
	  }
int main()
{
	niles obj1;
	jaydip obj2;
	durgesh(obj1);
	durgesh(obj2);
 } 
