#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main(){
    char str[5][10];
    int len,i,n,a,j;
    printf("Enter the number of names (max 5) :");
    scanf("%d",&a);
    for(j=0;j<a;j++){
        printf("\nEnter the name :");
        // scanf("%s",&str[j]);
        gets(str[j]);
    }
    for(i=0;i<a;i++){
        printf("\nThe name is :%s",str[i]);
        for(len=0;str[i][len]!='\0';len++);
      printf("\nThe size is : %d ",len);
    }
    return 0;
}