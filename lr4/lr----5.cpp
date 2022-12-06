#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int r,c;
	cout<<"Shape (a)";
	for(r=1;r<=10;r++)
	{
		for(c=1;c<=r;c++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<"Shape (b)\n";
	for(r=1;r<=10;r++)
	{
		for(c=10;c>=r;c--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<"Shape (c)\n";
	for(r=1;r<=10;r++)
	{
		for(int s=1;s<=r;s++)
		cout<<" ";
		for(c=10;c>=r;c--)
		cout<<"*";
		cout<<"\n";
	}	
	cout<<"Shape (d)\n";
	for(r=1;r<=10;r++)
	{
		for(int s=10;s>=r;s--)
		cout<<" ";
		for(c=1;c<=r;c++)
		cout<<"*";
		cout<<"\n";
	}
	getch();	
		
}
