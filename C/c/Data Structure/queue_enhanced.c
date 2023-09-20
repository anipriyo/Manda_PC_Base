#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
int head = -1, tail = -1, queue[MAX];
void value_shift();
void display();
void enqueue(int);
void dequeue();


int main()
{
    int choice,element;
    while(1)
    {
        printf("\n\n\n\n**Queue Menu**");
        printf("\nChoices :\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\nEnter your choice here:");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: printf("Enter the element to be inserted :");
                    scanf("%d",&element);
                    enqueue(element) ;
                    display() ;
                    break;
            case 2: dequeue() ;
                    display() ;
                    break;
            case 3: display() ;
                    break;
            case 4 : exit(0) ;
                    break;
            default: printf("Wrong Choice...");
                    break;
        }
    }
    return 0;
}
void display()
{
    if (tail == -1){   
       printf("\nThe Queue is empty.");
    }
    else{
        printf("\n The Queue is : ");
         for (int i = head ; i <= tail ; i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void enqueue(int el)
{
    if (tail == MAX-1)
    {
        printf("\nQueue is in overflow condition");
    }
    else
    {
        if(head < 0){
            head++;
        }
        tail++;
        queue[tail]=el;
        printf("\nInsertion successful...... %d is inserted",queue[tail]);
    }
}
void dequeue()
{
    if (head < 0)
    {
        printf("\nQueue is in underflow condition");
    }
    else
    {
        head++;
        printf("\nDeletion successful...... %d is deleted",queue[head-1]);
        value_shift();
        if (head > tail)
        {
            head = tail = -1;
        } 
    }
}
void value_shift()
{
    for (int i = head; i <= tail ; i++)
    {
        queue[head-1]=queue[head];
        head++;
    }
    head = 0;
    tail--;
}