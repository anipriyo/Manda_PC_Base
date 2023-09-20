#include<stdio.h>
#include<string.h>
struct address{
	char city[10];
	long int pin;
	int ph[10];
};
struct emp{
	char name[20];
	struct address var;
};
int main()
{
	struct emp arr[3];
	int i;
	for(i=0;i<3;i++){
	printf("\n Enter the name , city, pin , phone number of emp %d: ",++i);
	i--;
	scanf("%s %s %d %d",&arr[i].name,&arr[i].var.city,&arr[i].var.pin,&arr[i].var.ph);
    }  
		printf("\n Employee Details are: ");
	for(i=0;i<3;i++)
	{
		printf("\n Employee name: %s , city: %s , pin number: %d , Phone number: %d",arr[i].name,arr[i].var.city,arr[i].var.pin,arr[i].var.ph );
	
	}
return 0;
}
