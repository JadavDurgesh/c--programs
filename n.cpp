#include<iostream>
using namespace std;

class A
{
	public:
		string name;
	
      void getname(string s)
      {
      	  name=s;
      	  cout<<"name = "<<name<<endl;
	  }
	      void getname(string s,int a)
      {
      	  name=s;
      	  cout<<"name = "<<name<<"\nage = "<<a;
	  }
};
int main()
{
	A obj;
	obj.getname("ravi");
	obj.getname("durgesh",22);
	return 0;
}
