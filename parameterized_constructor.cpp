#include<iostream>
using namespace std;

class test
{
	public:	
		int age;
		
    	test()
		{
			cout<<"default constructor..1"<<endl;
		}
		test(int a)
		{
			age = a;
			cout<<"AGE = "<<age<<endl;
		}
};
int main()
{
	test x;
	return 0;
}
