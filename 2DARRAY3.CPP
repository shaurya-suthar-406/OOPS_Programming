

#include<iostream.h>
#include<conio.h>

void main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	clrscr();
	cout<<"\nEnter 2D Array A\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\nEnter "<<i<<" Row & "<<j<<" Column : ";
			cin>>a[i][j];
		}
	}
	cout<<"\nEnter 2D Array B\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\nEnter "<<i<<" Row & "<<j<<" Column : ";
			cin>>b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"\n2D Array A is\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n2D Array B is\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n2D Array C(Sum of Arrays A & B) is\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<c[i][j];
		}
		cout<<"\n";
	}

	getch();
}