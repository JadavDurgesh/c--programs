#include<iostream>
using namespace std;

class A
 {
 	private:
 		int value;
 		public:
 			int fun(int x)
 			{
 				value = x;
 				cout<<value<<endl;
			 }
 };
int main()
{
	A ch;
	ch.fun(45);
	return 0;
}
