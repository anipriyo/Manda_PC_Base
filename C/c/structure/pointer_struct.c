#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
struct abc{
    char a;
    int b;
}s1,s2;

union def{
    int c;
    int d;
}s3,s4;

int main(){
    // struct abc *str1 = &s1;
    // s1.a = 18;
    // s1.b = 16;
    // printf("Address s1: %d = %d", str1, &s1);
    // printf("\nValue s1: %d", str1->a);

    printf("Structure Address: %d  %d", &s1.a, &s1.b);
    printf("\nUnion Address: %d  %d", &s3.c, &s3.d);
    return 0;
}