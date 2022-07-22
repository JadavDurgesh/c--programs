#include<iostream>
using namespace std;

class Bank
{
	public:
		int atmpin,balance;
		char bankname[20];
		string IFC;
};
class user1
{
   int age;
   string name;
   public:
   int getdetails(int a,string n)
   {
    age=a;
        name=n;
     cout<<"Age = "<<age<<endl<<"name = "<<name<<endl;	   
   }	
};
int main()
{
	int age11;
	string name22;
	Bank x;
	user1 v;
	cout<<"enter the atmpin,balance,bankname,IFc";
	cin>>x.atmpin>>x.balance>>x.bankname>>x.IFC;
	cout<<"atmpin="<<x.atmpin<<endl<<"balance="<<x.balance<<endl<<"bank name="<<x.bankname<<endl<<"IFC no. ="<<x.IFC;
     
     cout<<"enter the age & name";
     cin>>age11>>name22;  
     v.getdetails(age11,name22);
	return 0;
}
