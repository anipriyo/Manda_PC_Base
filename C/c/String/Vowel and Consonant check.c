#include<stdio.h>
#include<string.h>
int main()
{
int lower , upper ,i ,vowel=0,consonant=0;
char str[100];
	printf("Enter a string :");
//	gets(str);
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
		{
			if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
			{
				lower =(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u');
				upper =(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U');
				if(lower || upper)
					vowel++;
				else
					consonant++;
			}
		}
	printf("The number of vowels are %d and the number of consonants are %d",vowel,consonant);
return 0;
}	
