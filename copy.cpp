/*#include<iostream>
using namespace std;

void getpattn(int x,int y)
{
	int row,col;
	
	for(row=0;row<=5;row++)
	{
		for(col=0;col<=row;col++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
};
int main()
{
	int r,c;
	
	cout<<"enter the num r";
	cin>>r;
	
	cout<<"enter the num c";
	cin>>c;
	getpattn(r,c);
	return 0;
}*/
#include<iostream>
using namespace std;
struct Book
{
	char name[20];
	int  age;
};

int main()
{
	struct Book B[50];
	int x;
	for(x=0;x<2;x++)
	{
		cout<<"enter the name,& age\n";
		cin>>B[x].name>>B[x].age;
	}
	for(x=0;x<2;x++)
	{
		cout<<B[x].name<<endl;
		cout<<endl<<B[x].age;
	}
	return 0;
}


