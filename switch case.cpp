#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int choice;
	cout<<"enter the a num";
	cin>>a;
	
	cout<<"enter the b num";
	cin>>b;
	
	cout<<"enter the choice.. ";
	cin>>choice;
	
    switch(choice) 
{              
                   case '+':
      cout<<a+b;
                            break;
             
                   case 2:
      cout<<a-b;
                            break;
         
                   case 3:
      cout<<a*b;
                            break;
         
                   case 4:
      cout<<a/b;
                            break;
         
                   case 5:
      cout<<(a>b);
                            break;


	default:
		cout<<"in valid num";
}	
     
	return 0;
}

