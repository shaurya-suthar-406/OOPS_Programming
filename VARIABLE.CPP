//Program to demonstrate use of variables

#include<iostream.h>
#include<conio.h>

void main()
{
	char name[50];
	int acno;
	double balance; //We can take long or float also

	clrscr();

	cout<<"\nEnter Your Name : ";
	cin>>name;
	cout<<"\nEnter Your Account Number : ";
	cin>>acno;
	cout<<"\nEnter Your Account Balance : ";
	cin>>balance;

	cout<<"\n************************************************\n";
	cout<<"\nName : "<<name;
	cout<<"\n\nAccount No. : "<<acno;
	cout<<"\n\nAccount Balance : "<<balance;
	cout<<"\n\n************************************************\n";

	getch();

}