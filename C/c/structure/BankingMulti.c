#include<stdio.h>
#include<stdlib.h>
struct bank{
	int acc_no;
	char name[20];
	double balance;
}account[100];
int acc_open();
int login();
int deposit();
int withdraw();
int viewbalance();
int main()
{
	printf("Welcome to XXXXXXX Bank.");
	int choice,c=0 ;
	do{
		printf("\n Enter 1. Account Opening \n 2.Login to your account:  ");
		scanf("%d",&choice);
		switch(choice){
			case 1: acc_open();
					break;
			case 2: login();
					break;
			default: printf("Invalid Input");
					break;
		}
		printf("\n Enter 1 for exit or Enter 0 to coninue: ");
		scanf("%d",&c);
	}while(c==0);
		return 0;
}
int login()
{
        int acc, i,b;
    printf("Enter Account number: ");
    scanf("%d",&acc);
    for(i=0;i<=100;i++)
    {
        if(account[i].acc_no==acc)
        {
            b=i;
            printf("Welcome %s to our bank ",account[b].name);
        }
        else
        {
            printf("The Account Number Doesn't Exist.");
        }
    }
    int choice,c=0 ;
	do{
        printf("\n1. Deposition \n 2.Withdrawal \n 3. View balance \n 4.Logout  ");
		scanf("%d",&choice);
		switch(choice){
			case 1: deposit(b);
					break;
			case 2: withdraw(b);
					break;
            case 3: viewbalance(b);
                    break;
            case 4: c=1;
                    break;
			default: printf("Invalid Input");
					break;
        }
    }while(c==0);
    
}




int acc_open(struct bank account[])
{
    static int i=0;
	int cn=0;
	for(;cn==0 && i<=100;i++)
	{

		int random;
		printf("\n Initiating the account opening sequence.... ");
		printf("\n Enter the name of the Account owner: ");
		scanf("%s",account[i].name);
		printf("\n your Account is opened: ");
		account[i].balance=0.0000;
		random = rand();
		account[i].acc_no=random;
		printf("\n Your Balance is %f ",account[i].balance);
		printf("\n Your Account number is is %d ",account[i].acc_no);
		printf("\n To exit press 1 or to continue press 0: ");
		scanf("%d",&cn);
	}
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
int deposit(struct bank account,int b)
{
	float amount;
	printf("Enter the amount to be Deposited: ");
	scanf("%f",&amount);
	account[b].balance=account[b].balance+amount;
	printf("\n Thanking You For Banking With Us.");
	printf("\n Your Present Balance is: %f",account[b].balance);
}
