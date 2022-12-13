#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int o=1,sum=0;
	while(o<=10)
	{
	sum=sum+o;
	o=o+2;
	}
	cout<<"Sum = "<<sum;
	getch();
}
