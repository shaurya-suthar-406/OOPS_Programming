


#include<iostream.h>
#include<conio.h>

class Rect
{
	double length,width;
	//In OOP Programing, It will be declared inside the block.
	public:
	Rect()
	{
		cout<<"\nEnter Length : ";
		cin>>length;
		cout<<"\nEnter Width : ";
		cin>>width;
	}
	void area()
	{
		cout<<"\nArea : "<<length*width;
	}
};
void main()
{
	clrscr();
	Rect r;
	r.area();
	getch();
}