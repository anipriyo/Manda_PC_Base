#include<stdio.h>
int main()
{
	int arr[]={10,20,36,72,45,36};
	int*j,*k ;
	int *a,*b,*c,*d,*e,*f;
	a=&arr[0];
	b=&arr[1];
	c=&arr[2];
	d=&arr[3];
	e=&arr[4];
	f=&arr[5];
	printf("a= %d b= %d c= %d d= %d e= %d f= %d ",a,b,c,d,e,f);
	j=&arr[4];
	k=(arr +4);
	if (j==k)
	{
		printf("Same location j= %d k= %d",j,k);
	}
	else
	{
		printf("Mot Same location");
	}
	return 0;
}
