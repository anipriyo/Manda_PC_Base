#include<stdio.h>
main()
{
	char inp;
	printf("Enter an alphabet : ");
	scanf("%c",&inp);
	if((inp=='a') || (inp=='e') || (inp=='i') || (inp=='o') || (inp=='u') || (inp=='A' )|| (inp=='E') || (inp=='I') || (inp=='O') || (inp=='U'))
	{
		printf("It is a vowel");	
	}
	else
	{
		printf("It is not a vowel");	
	}
}
