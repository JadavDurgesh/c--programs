#include<iostream>
using namespace std;
class factornum
{
	public:
		int num;
		
	     factornum(int v)
	     {
	     	num=v;
	      cout<<"\n"<<num;
	      
	      int i;
	      for(i=1;i<=num/2;i++)
	      {
	      	if(num%i==0)
	      	{
	      		cout<<"\n"<<i;
			 }
		  }
		 }
};
int main()
{
	int n;
	cout<<"enter the n\n";
	cin>>n;
	factornum w(n);
}
