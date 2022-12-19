#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int r=1;
	while(r<=5)
	{
		int c=1;
		while(c<=r)
		{
		cout<<r;
		c++;
		}
		cout<<endl;
		r++;
	}
	getch();
}
