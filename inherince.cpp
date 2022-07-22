#include<iostream>
using namespace std;

class A
{
   protected:
     int a=12;	
};
class B:public A
{
   public:
      int getA()
      {
      	 cout<<a;
	  }
} ;
int main()
{
	B x;
	x.getA();
}
