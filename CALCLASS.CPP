

#include<iostream.h>
#include<conio.h>

class Calc
{
	int n1,n2;
	public:
		void getNo();
		void Addition();
		void Subtraction();
		void Multiplication();
		void Division();
};
void Calc::getNo()
{
	cout<<"\nEnter First Number : ";
	cin>>n1;
	cout<<"\nEnter Second Number : ";
	cin>>n2;
}
void Calc::Addition()
{
	cout<<"\n\nAddition : "<<n1+n2;
}
void Calc::Subtraction()
{
	cout<<"\n\nSubtraction : "<<n1-n2;
}
void Calc::Multiplication()
{
	cout<<"\n\nMultiplication : "<<n1*n2;
}
void Calc::Division()
{
	cout<<"\n\nDivision : "<<n1/n2;
}
void main()
{
	int choice;
	Calc c;
	clrscr();

	c.getNo();

	cout<<"\n\n\nPlease Choose One Function From the Following";
	cout<<"\n\n1. Addition";
	cout<<"\n2. Subtraction";
	cout<<"\n3. Multiplication";
	cout<<"\n4. Division";
	cout<<"\nEnter the No. of Your Choice : ";
	cin>>choice;

	if(choice==1)
	{
		c.Addition();
	}
	else if(choice==2)
	{
		c.Subtraction();
	}
	else if(choice==3)
	{
		c.Multiplication();
	}
	else if(choice==4)
	{
		c.Division();
	}
	else
	{
		cout<<"\nInvalid Input! Please Enter A Valid Input";
	}

	getch();
}