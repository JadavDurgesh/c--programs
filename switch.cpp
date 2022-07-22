#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,choice,maxnum,numx,row,col;
	
	cout<<"enter choice num";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			
    	cout<<"enter the num 1 =  ";
	    cin>>num1;
	    cout<<"enter the num 2 =  ";
		cin>>num2;
		cout<<"enter the num 3 =  ";
		cin>>num3;
	    
			maxnum = (num1>num2)?
				(num1>num3)?num1:num3:
				(num2>num3)?num2:num3;
	
	    cout<<" maxnum = "<<maxnum;
	    break;
	
	    case 2:
		cout<<"enter the num.."<<endl;
		cin>>numx;
		if (numx%2==0)
		{
			cout<<"num of even...";
		}
		else
		{
			cout<<"num of odd..";
		}
		break;
		
		default:
		cout<<"invalid choice";
    }
	return 0;
}
