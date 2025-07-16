

#include<iostream.h>
#include<conio.h>

class Student
{
	char *sname;
	int rno,s1,s2,s3,total;

	public:
		void getData()
		{
			cout<<"\nEnter Student Name : ";
			cin>>sname;
			cout<<"\nEnter Student Roll No : ";
			cin>>rno;
			cout<<"\nEnter Marks of Subject 1 : ";
			cin>>s1;
			cout<<"\nEnter Marks of Subject 2 : ";
			cin>>s2;
			cout<<"\nEnter Marks of Subject 3 : ";
			cin>>s3;
		}
		void putData()
		{
			cout<<"\nName : "<<sname;
			cout<<"\nRoll No : "<<rno;
			cout<<"\nMarks of Subject 1 : "<<s1;
			cout<<"\nMarks of Subject 2 : "<<s2;
			cout<<"\nMarks of Subject 3 : "<<s3;
			total=s1+s2+s3;
			cout<<"\nTotal Marks : "<<total;

			double per=total/3;

			cout<<"\nPercentage : "<<per;

			if(per>=70)
			{
				cout<<"\nDistinction";
			}
			else if(per>=60)
			{
				cout<<"\nFirst Class";
			}
			else if(per>=50)
			{
				cout<<"\nSecond Class";
			}
			else if(per>=40)
			{
				cout<<"\nPass Class";
			}
			else
			{
				cout<<"\nFail";
			}
		}
};
void main()
{
	clrscr();
	Student s;
	s.getData();
	s.putData();

	getch();
}