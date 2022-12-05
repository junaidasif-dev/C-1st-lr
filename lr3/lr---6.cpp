#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter marks:";
	cin>>marks;
	if((marks<=100)&&(marks>33))
	cout<<"\nCongratulations! You passed";
	else if(marks>0)
	cout<<"\nOops! You failed";
	else
	cout<<"Invalid marks";
	getch();
}
