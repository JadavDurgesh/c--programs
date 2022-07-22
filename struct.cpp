#include<iostream>
using namespace std;
struct Book
{
	int book_id;
	char author[20];
};
int main()
{
	struct Book B[50];
	int i;
   for(i=0;i<5;i++)
   {
   	cin>>B[i].book_id>>B[i].author;
   	cout<< "book id = "<<B[i].book_id ;
	cout<<" author name = "<<B[i].author;
   }
   cout<<endl;
	return 0;
}
