#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"\nEnter 4 integers:";
	cin>>a>>b>>c>>d;
	
	 if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			cout<<a;
			else
			cout<<d;
		}
		else
		cout<<c;
	}
	else if(b>c)
	{
		if(b>d)
		cout<<b;
		else
		cout<<d;
	}
	else if(c>d)
		cout<<c;
		 else
		cout<<d;	
	getch();
}
