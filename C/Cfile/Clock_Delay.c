#include<stdio.h>
#include<time.h>
void delay(int number_of_seconds) 
{ 
    int milli_seconds = 1000 * number_of_seconds; 
  
    clock_t start_time = clock(); 
   
    while (clock() < start_time + milli_seconds) ;

}
 
int main()
{ 
	int a,i;
	printf("Enter Your IP :");
	scanf("%d",&a);
	printf("\n _____Loading_____");
	for (i = 0; i < 10; i++) {  
        delay(1);
    }
    printf("\n Successful .");
    printf("\n \n \n  Program Copyright by Anipriyo Mandal .");
}
