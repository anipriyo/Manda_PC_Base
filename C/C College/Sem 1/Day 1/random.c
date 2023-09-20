#include <stdio.h>
int digit_count(unsigned long long int address1){
   int count=0;    
   while(address1!=0)  
   {  
       address1=address1/10;  
       count++;  
   }  
    return count;  
}
int chop(unsigned long long int address2,int b){
    for (int i = 0; i < b; i++)
    {
        address2=address2/10;
    }
    return address2;
}
int main()
{
    int size,a,b;
    unsigned long long int p=54321, address,random;
    printf("Enter the number of digits (max 18):");
    scanf("%d", &size);
    address=&p;
    a=digit_count(address);
    b=(a-size);
    random=chop(address,b);
    printf("The random number is : %llu\n",random);
    return 0;
}