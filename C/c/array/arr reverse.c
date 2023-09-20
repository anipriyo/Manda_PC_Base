#include<stdio.h>
#include<stdlib.h>
struct bank{
	int acc_no;
	char name[20];
	double balance;
}account;
int acc_open();
int deposit();
int withdraw();
int viewbalance();
int main()
{
	printf("Welcome to XXXXXXX Bank.");
	int choice,c=0 ;
	do{
		printf("\n Enter 1 for account opening, 2 for Deposition , 3 for Withdrawal , 4 to view balance:  ");
		scanf("%d",&choice);
		switch(choice){
			case 1: acc_open();
					break;
			case 2: deposit();
					break;
			case 3: withdraw();
					break;
			case 4: viewbalance();
					break;
			default: printf("Invalid Input");
					break;
		}
		printf("\n Enter 1 for exit or Enter 0 to coninue: ");
		scanf("%d",&c);
	}while(c==0);
		return 0;
}


int acc_open(struct bank account)
{
		int random;
		printf("\n Initiating the account opening sequence.... ");
		printf("\n Enter the name of the Account owner: ");
		scanf("%s",&account.name);
		printf("\n your Account is opened: ");
		account.balance=0.0000;
		random = rand();
		account.acc_no=random;
		printf("\n Your Balance is %f ",account.balance);
		printf("\n Your Account number is is %d ",account.acc_no);

}


int viewbalance(struct bank account)
{
	printf("%s has a balance of %f in his account",account.name,account.balance);
}


int withdraw(struct bank account)
{
	float amount;
	if(account.balance==0)
	{
		printf("\n You Dont have any balance in your account");
	}
	else
	{
		printf("Enter the amount to be withdrawn : ");
		scanf("%f",&amount);
		if(amount<=account.balance)
		{
			account.balance=account.balance-amount;
			printf("\n Thanking You For Banking With Us.");
			printf("\n Your Present Balance is: %f",account.balance);
		}
		else
		{
			printf("\n Your Balance Is Not Sufficient.");
		}
	}
}
int deposit(struct bank account)
{
	float amount;
	printf("Enter the amount to be Deposited: ");
	scanf("%f",&amount);
	account.balance=account.balance+amount;
	printf("\n Thanking You For Banking With Us.");
	printf("\n Your Present Balance is: %f",account.balance);
}
