#include<stdio.h>  
int main()    
{    
 int i,f=1,n;    
 printf("Enter a number: ");    
  scanf("%d",&n);   
  if(n<0)
   {
 	  printf("The number %d is negative therefore the factorial is not possible.",n);
   }
   else 
   {
 	  for(i=1;i<=n;i++){    
      f*=i;    
   }    
  printf("Factorial of %d is: %d",n,f);    
   } 
return 0;  
}
