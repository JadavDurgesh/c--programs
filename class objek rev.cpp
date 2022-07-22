#include<iostream>
using namespace std;
class test
{
	public:
	int a;	
	int gest()
	{
	  cout<<"the function...\n";	
	}		
};
int main()
{
	test x;
	
	cin>>x.test::a;
	cout<<x.test::a;
	
	x.test::gest();
	return 0;
}
