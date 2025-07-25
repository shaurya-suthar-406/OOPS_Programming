

#include<iostream.h>
#include<conio.h>

void main()
{
	int n,i;
	float num[100],sum=0.0,average;
	clrscr();

	cout<<"\nEnter the Numbers of Data : ";
	cin>>n;

	while(n>100||n<=0)
	{
		cout<<"\nError! Number Should be in Range of 1 to 100";
		cout<<"\nEnter the Number Again : ";
		cin>>n;
	}
	for(i=0;i<n;++i)
	{
		cout<<i+1<<". Enter Number : ";
		cin>>num[i];
		sum += num[i];
	}
	average=sum/n;
	cout<<"\nAverage : "<<average;

	getch();

}