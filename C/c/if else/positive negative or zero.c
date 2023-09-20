#include<stdio.h>
int main()
{
  int a ;
  printf("Enter the number : ");
  scanf("%d",&a);
  if(a==0)
   {
     printf("The number %d is equal to 0 ",a);
   }
   else if(a<0)
   {
 	  printf("The number %d is negative.",a);
   }
   else if(a>0)
    {
 	  printf("The number %d is positive.",a);
    }
   else 
   {
 	  printf("Wrong input %d ",a);
   }
   return 0 ;
}
   
   
