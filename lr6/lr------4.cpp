
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int rem=0,rev=0,temp=0,test=0;
    cout<<"\n\nThe palindrome prime numbers from 100 to 500 are"<<endl;
    for(int i=100; i<500; i++)
	{
     
        for(int j=2; j<i; j++)
		{
            if(i%j==0)
			{
                test=1;
            }
            
        }   
            if(test==0)
			{
             temp=i;
                while(temp>0)
    {
           rev=rev*10;
           rev=rev+temp%10;
           temp=temp/10;
    }
    if(i==rev)
		{
            cout<<i<<" ";
    	}

           }
          continue;
    }
    getch();
}
