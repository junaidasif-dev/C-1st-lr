#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int o=1,sum=0;
	do{
	sum=sum+o;
	o=o+2;
	}
	while(o<=19);
	cout<<"Sum = "<<sum;
	getch();
}
