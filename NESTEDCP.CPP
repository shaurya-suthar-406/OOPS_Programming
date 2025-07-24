

#include<iostream.h>
#include<conio.h>

void main()
{
	int n,i,j;
	clrscr();

	cout<<"\nEnter the Number of Rows : ";
	cin>>n;

	for(i=1;i<=n;++i)
	{
		for(j=1;j<=i;++j)
		{
			cout<<" *";
		}
		cout<<"\n";
	}

	getch();
}