#include<iostream>
using namespace std;

class Father
{
	protected:
		int ATMpin=9876;
		string Bankname="SBI";
};
class Mother
{
	protected:
		int ATMpin2=8765;
		string Bankname2 ="ADC";	
};
class son: public Father,public Mother
{
     public:
     	int getbankig()
     	{
     		cout<<ATMpin<<endl<<Bankname<<endl<<ATMpin2<<endl<<Bankname;
		 }
};
class Daughter: public Father,public Mother
{
     public:
     	int getbankig123()
     	{
     		cout<<ATMpin<<endl<<Bankname<<endl<<ATMpin2<<endl<<Bankname;
		 }
};
int main()
{
	son chaking;
    chaking.getbankig();
	
	Daughter obj;
    obj.getbankig123();
	
}
