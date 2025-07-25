

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *s1,*s2;
	int x;

	clrscr();

	cout<<"\nEnter The String : ";
	cin>>s1;

	strcpy(s2,s1);
	strrev(s1);

	x=strcmp(s1,s2);

	if(x==0)
	{
		cout<<"\nGiven String is Palindrom.";
	}
	else
	{
		cout<<"\nGiven String is not Palindrom";
	}

	getch();
}