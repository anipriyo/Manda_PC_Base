#include<stdio.h>
int main()
{
	char s=1;
	switch(s)
	{
		case 1:
			printf("diamond\n");
		case 2:
			printf("spade\n");
		default :
			printf("heart\n");
	}
	printf(" I thought one wears a suit");
	return 0;
}
