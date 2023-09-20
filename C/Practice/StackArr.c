#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int top = -1, stack[MAX];
void push()
{
    if (top == MAX - 1)
        printf("\nThe Stack is full.");
    else
    {
        int val;
        printf("\nEnter the value:");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}
void pop()
{
    if (top == -1)
        printf("\nStack is empty.");
    else
    {
        printf("\nThe deleted value is : %d", stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if (top == -1)
        printf("\nStack is empty.");
    else
    {
        printf("\nThe values are :");
        for (i = top; i >= 0; i--)
        {
            printf(" %d", stack[i]);
        }
    }
}
int main()
{
    int ch;
    while (1)
    {
    printf("\n****Stack Using Array****");
    printf(" \n1.Push \n 2.Pop \n 3.Display \n 4.Exit");
    printf("\nEnter choice between 1-4\n");
    scanf("%d", &ch);
   
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWRONG INPUT");
        }
    }
    return 0;
}
