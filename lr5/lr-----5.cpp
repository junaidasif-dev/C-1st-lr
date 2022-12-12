#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i=1,n,p,ans=1;
	cout<<"Enter number:";
	cin>>n;
	cout<<"\nEnter power:";
	cin>>p;
	while(i<=p)
	{
		ans=ans*n;		
		i++;
	}
	cout<<n<<" ^ "<<p<<" = "<<ans;
	getch();
}
