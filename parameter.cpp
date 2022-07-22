#include<iostream>
using namespace std;
struct book
{
	char author[20];
	int book_id;
};
int main()
{
	struct book B[50];
	
	int x;
	
	for(x=0;x<5;x++)
	{
		cin>>B[x].author;
		cin>>B[x].book_id;
	}
	for(x=0;x<5;x++)
	{
		cout<<"Author = "<B[x].author;
		cout<<"Book_id = "<<B[x].book_id;
		
		cout<<endl;
	}
	return 0;
}
