#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int e=1,p=1;
	while(e<=12)
	{
		if(e%2==0)
		p=p*e;
		e++;
	}
	cout<<"Product = "<<p;
	getch();
}
