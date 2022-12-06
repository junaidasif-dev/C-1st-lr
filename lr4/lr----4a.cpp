#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,f=1;
	cout<<"Enter a number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"\nFactorial of "<<n<<" is "<<f;
	getch();
}
