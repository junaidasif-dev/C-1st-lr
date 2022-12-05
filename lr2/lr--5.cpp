#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int age,m,d,h,min,sec;
	cout<<"Enter age in years:";
	cin>>age;
	m=age*12;
	d=age*365;
	h=d*24;
	min=h*60;
	sec=min*60;
	cout<<"\nAge in months is "<<m;
	cout<<"\nAge in days is "<<d;
	cout<<"\nAge in hours is "<<h;
	cout<<"\nAge in minutes is "<<min;
	cout<<"\nAge in seconds is "<<sec;
	getch();
}
