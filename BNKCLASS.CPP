#include<iostream.h>
#include<conio.h>
#include<string.h>

class BankAccount
{
	double balance;
	public:
		BankAccount(double initialBal = 0.0)
		{
			if(initialBal<0)
			{
				cout<<"\nInitial Balance can't be Negative.";
				balance=0.0;
			}
			else
			{
				balance=initialBal;
			}
			cout<<"Account created with Initial Balance : "<<balance;
		}

		void deposit(double amount)
		{
			if(amount>0)
			{
				balance+=amount;
				cout<<"\nDeposited : "<<amount;
				cout<<"\nNew Balance : "<<balance;
			}
			else
			{
				cout<<"\nDeposit Amount must be Positive";
			}
		}

		void withdraw(double amount)
		{
			if(amount<=0)
			{
				cout<<"\nWithdrawal Amount must be Positive";
			}
			else if(amount>balance)
			{
				cout<<"\nInsufficient funds. Current Balance : "<<balance;
			}
			else
			{
				balance-=amount;
				cout<<"\nWithdrew : "<<amount<<". New Balance : "<<balance;
			}
		}
		double getBalance()
		{
			return balance;
		}
};

void main()
{
	cout<<"\n--- Creating Bank Accounts ---";
	BankAccount a1(1000);
	BankAccount a2;
	clrscr();

	cout<<"\n--- Operations on Account 1 ---\n";
	a1.deposit(500);
	a1.withdraw(200);
	a1.withdraw(1500);
	a1.deposit(-100);

	cout<<"\nFinal Balance for Account 1 : "<<a1.getBalance();

	cout<<"\n\n--- Operations on Account 2 ---\n";
	a2.deposit(750);
	a2.withdraw(300);
	a2.withdraw(500);
	a2.deposit(250);

	cout<<"\nFinal Balance for Account 2 : "<<a2.getBalance();

	getch();
}