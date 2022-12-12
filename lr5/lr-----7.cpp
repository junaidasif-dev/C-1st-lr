#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	char c;
	cout<<"Enter an integer:";
	cin>>i;
	if((i>=0)&&(i<=127))
	{
		c=i;
		cout<<"ASCII character of "<<i<<" is "<<c;
	}
	else
	cout<<"\nWrong input";
	getch();
}
