#include<iostream>
using namespace std;
void getpattern(int x,int y)
{
	int row,col;
	for(row=1;row<=x;row++)
	{
		for(col=1;col<=y;col++)
		{
			if(row%2==0)
			{
				cout<<"B";
			}
			else
			{
				cout<<"A";
			}
		}
		cout<<endl;
	}
}
int main()
{
	int r,c;
	
	cout<<"eter the rows & cols size...";
	cin>>r>>c;
	getpattern(r,c);
  return 0;
}
