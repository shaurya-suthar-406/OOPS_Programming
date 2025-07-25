#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b;
	int choice;

	clrscr();

	cout<<"\nEnter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;

	cout<<"\nEnter Your Choice\n";
	cout<<"\n1. Addition";
	cout<<"\n2. Subtraction";
	cout<<"\n3. Multiplication";
	cout<<"\n4. Division";
	cout<<"\n\nEnter the Corresponding Number to Your Choice : ";
	cin>>choice;

	switch(choice)
	{
		case 1:
			cout<<"\nAddition : "<<a+b;
			break;

		case 2:
			cout<<"\nSubtraction : "<<a-b;
			break;

		case 3:
			cout<<"\nMultiplication : "<<a*b;
			break;

		case 4:
			cout<<"\nDivision : "<<a/b;
			break;

		default:
			cout<<"\nInvalid Input! Please Enter Corresponding Number to Your Choice.";
			break;
	}

	getch();

}