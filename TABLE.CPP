

#include<iostream.h>
#include<conio.h>

void main()
{
	int n;
	int i;

	clrscr();

	cout<<"\nEnter a Positive Integer : ";
	cin>>n;

	for(i=1;i<=10;++i)
	{
		cout<<"\n"<<n<<" * "<<i<<" = "<<n*i;
	}

	getch();
}