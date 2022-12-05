#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter two integers:";
	cin>>a>>b;
	c=a+b;
	cout<<"Sum = "<<c;
	cout<<"\nEnter two integers:";
	cin>>a>>b;
	c=a-b;
	cout<<"Sub = "<<c;
	cout<<"\nEnter two integers:";
	cin>>a>>b;
	c=a*b;
	cout<<"Mul = "<<c;
	cout<<"\nEnter two integers:";
	cin>>a>>b;
	c=a/b;
	cout<<"Div = "<<c;
	getch();
}
