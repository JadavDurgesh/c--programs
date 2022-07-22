#include<iostream>
using namespace std;
class armnum
{
   
public:
	
	 int ch()
 {
	 	 
   	int n,c,r,arm=0;
    cout<<"enter the n num..";
    cin>>n;
   	c=n;
   	arm=0;
   	
   	while(n>0)
   	{
   	  r=n%10;
	  arm=r*r*r+arm;
	  n=n/10;
	}
	if(c==arm)
	{
		cout<<"armstom num..";
	}
	else
	{
		cout<<"not";
	}
  }
};
int main()
{
	armnum a;
	a.ch();
	return 0;
}

