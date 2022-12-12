#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char a;
	cout<<"Enter an alphabetic character:";
	cin>>a;
	switch (a)
	{
		case 'A':
 		case 'a':
 		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		cout<<a<<" is vowel.";
		break;
		default:
		cout<<a<<" is consonent.";
		break; 	
	}
	getch();
}
