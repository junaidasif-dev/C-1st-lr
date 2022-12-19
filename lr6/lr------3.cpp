#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k;
    while(i<=5)
	{
        k=5-i;
        while(k>=0)
		{
            cout<<" ";
            k--;
        }
        j=1;
        while(j<=2*i-1)
		{
            cout<<char(i+64);
            j++;
        }i++;
        cout<<endl;
    }
}




