#include<iostream>
using namespace std;

class test
{
	public:
	ch()
	{
		char num[20];
		
		cout<<"enter the num..";
		cin>>num;
	   
	   int length,flag=0,i=0;
	   
	    length=strlen(num);
	    
	   while(num[i++]!=='\0')
	 {
	     if(num[i]=='.')
	    {
	       flag=1;
		   break;	 	
     	}   	
     }
	 if(flag)
	 {
	    cout<<"float.."; 	
	 }	
	else	
		{
			cout<<"int...";
		}
	}
};
int main()
{
	test obj;
	obj.ch();
	return 0;
}
