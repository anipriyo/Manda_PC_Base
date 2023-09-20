#include<stdio.h>
#include<string.h>
struct book
{
	char name[10];
	float price ;
	int page ;
}a;
int main()
{
	struct book b,c;
	printf("Enter the name price and pages of the First book: ");
	//	fflush(stdin);
	scanf("%s %f %d",&a.name,&a.price,&a.page);
	
	printf("\n Enter the name price and pages of the Second book: ");
	//	fflush(stdin);
	scanf("%s %f %d",&b.name,&b.price,&b.page);
	
	strcpy(c.name,a.name);
	c.price=a.price;
	c.page=a.page;
	
	printf("\n The price of %s is %f",a.name,a.price);
	printf("\n The page of %s is %d",c.name,c.page);	
	
	
	
	return 0;
	
}
/* int main()
{
	struct book lib[10];
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n Enter the name , price and pages of book number %d: ",++i);
		i--;
		scanf("%s %f %d",&lib[i].name,&lib[i].price,&lib[i].page);
	}
	printf("\n Book Details are: ");
	for(i=0;i<3;i++)
	{
		printf("\n Book name: %s , price: %f , Pages: %d",lib[i].name,lib[i].price,lib[i].page );
	
	}
	return 0;
}*/








