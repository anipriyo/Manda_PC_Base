#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main(){
    // int arr[6]={1,3,5,7,9,11};
    // char x='a';
    // int *ptr=&x;
    // // ptr=arr;
    // printf("%d",*ptr);
    // printf("\n%d",*(ptr+1));

    // int *arr[4],a=8,b=4,c=2,d=1;
    // arr[0]=&a;
    // arr[1]=&b;
    // arr[2]=&c;
    // arr[3]=&d;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("\nNumber=%d",*arr[i]);
    // }

    // int i,j;
    // for (i=0,j=4; i<4,j>1; i++,j--);
    // printf("%d,%d",i,j);

    int mat[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int (*pa)[4],i;
    pa=mat;
    for (int i = 0; i < 3; i++)
    {
        printf("\n Address pf mat[%d][0]=%u",i,&mat[i][0]);
        printf("\n Address pf row[%d]=%u",i,(pa+i));
        printf("\n Address pf row[%d]=%u",i,**(pa+i));

        /* code */
    }
    
    

 


    // char a='a',b='b';
    // printf("%d,%d",a,b);
    // char *ptr1=&a , *ptr2=&b ;
    // printf("\n%d",ptr1);
    // printf("\n%d",ptr1+1);
    // // *ptr2 = *ptr1 + *ptr2;
    // // *ptr1 = *ptr2 - *ptr1;
    // // *ptr2 = *ptr2 - *ptr1; 
    // // printf("\n%d,%d",a,b);
    return 0;
}