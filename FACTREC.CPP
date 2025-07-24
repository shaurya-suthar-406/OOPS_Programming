

#include<iostream.h>
#include<conio.h>

int factorial(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
		return n*factorial(n-1);
}
void main()
{
	int num;
	clrscr();
	cout<<"\nEnter the Number to Find Factorial : ";
	cin>>num;

	cout<<"\nFactorial of "<<num<<" is "<<factorial(num);

	getch();
}