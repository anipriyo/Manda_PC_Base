#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,s,m;
    float c,d,ss,mm;
    scanf("%d %d",&a,b);
    scanf("%f %f",&c,d);
    s=a+b;
    m=a-b;
    ss=c+d;
    mm=c-d;
    printf("\n%d %d",s,m);
    printf("\n%f %f",ss,mm);
    
    return 0;
}
