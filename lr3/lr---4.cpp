#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char letter;
	cout<<"Enter an alphabetic letter:";
	cin>>letter;
	switch (letter)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':	
	case 'o':
	case 'O':	
	case 'u':
	case 'U':	
	cout<<letter<<" is vowel";
	break;
	default:
	cout<<letter<<" is consonant";
	}
	getch();
}
