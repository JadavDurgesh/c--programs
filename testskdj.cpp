#include<iostream>
using namespace std;
int main()
{   
    char choice,ch;
   do
   {
     cout<<"enter the choice";
     cin>>choice;
     
     switch(choice) 	 
{
	             case'+':
	cout<<"puls";
	            break;
	        
	            case'-':
	cout<<"manus";
	            break;
	            
	            case'*':
	cout<<"multiplication";
	             break;
	default:
		cout<< "not choice num";
}
   
    //cout<<"\n do you want to continue(Y/N):";
    cin>>ch;
}
   while(ch=='Y' || ch=='Z');   	

}
