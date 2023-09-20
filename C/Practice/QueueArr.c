#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int head = -1, tail = -1, queue[MAX];
void enqueue(){
    if(tail==MAX-1)
        printf("\nThe queue is full.");
    else{
        if (head<0)
        {
            head++;
        }
        tail++;
        int val ;
        printf("\nEnter a value :");
        scanf("%d",&val);
        queue[tail]=val;
    }
}
void dequeue(){
    if (tail==-1)
    {
        printf("\nThe queue is empty.");
    }
    else{
        printf("\nThe deleted value is %d",queue[head]);
        head++;
        if (head>tail)
        {
            head=-1;
            tail=-1;
        }
    }
    
}
void display(){
    int i;
    printf("\nThe Queue contains : ");
    for ( i = head; i <= tail; i++)
    {
        printf(" %d ",queue[i]);
    }
    
}
int main()
{
    int ch=0;
    while (1)
    {
        printf("\n Queue using Array");
        printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit");
        printf("\nEnter your choice between 1-4:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong choice");
        }
    }
    return 0;
}