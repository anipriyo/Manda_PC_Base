#include<stdio.h>
int main()
{
	 int a[]={10,20,30,40,50},*i;
	 i=a;
	 i=i+4;
	 printf("%d %d %d ",*i,i,a[4]);
	 	 return 0;
}
