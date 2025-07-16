#include<iostream.h>
#include<conio.h>

void main()
{
	int num_int=10;
	double num_double;

	clrscr();

	num_double=num_int;

	cout<<"\nInteger Number = "<<num_int;
	cout<<"\nDouble Number = "<<num_double;

	double double_num2=3.56;
	cout<<"\n2nd Double Number = "<<double_num2;

	int int_num2=int(double_num2);
	cout<<"\n2nd Integer No. = "<<int_num2;

	getch();
}