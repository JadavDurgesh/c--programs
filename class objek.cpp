#include<iostream>
using namespace std;

class bank
{	
	int atmpin,Balance;
	public: 
		  int fun(int pin)
		  { 
		    atmpin=pin;
		  	cout<<"atmpin="<<atmpin<<endl;
		  }
		  int fun2(int Balance)
		  {
		  	cout<<Balance;
		  }
};
int main()
{
	bank B;
	B.fun(9909);
	B.fun2(1540000);
	return 0;
}
