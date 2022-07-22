#include<iostream>
using namespace std;

class jaypal;
class uttam;
class sunil
{
	private:
		int money1=500;
	public:
		friend void vishal(sunil s,jaypal j,uttam u);
};
class jaypal
{
	private:
		int money2=500;
	public:
		friend void vishal(sunil s,jaypal j,uttam u);
};
class uttam
{
	private:
		int money3=590;
	public:
		friend void vishal(sunil s,jaypal j,uttam u);
};

     void vishal(sunil s,jaypal j,uttam u)
     {
     	cout<<s.money1+j.money2+u.money3;
	 }
int main()
{
	sunil n1;
	jaypal n2;
	uttam  n3;
	vishal (n1,n2,n3);
	return 0;
}
