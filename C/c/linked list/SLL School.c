#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} * start, *end, *temp, *p, *r;
char ch;
int c;
void insert()
{
    temp = (struct node *)malloc(sizeof(struct node));
    int pos, e, n;
    e = 1;
    p = start;
    printf("enter the number you want to insert:\n");
    scanf("%d", &n);
    temp->data = n;
    printf("select the option:\n1.)normally\n2.)at specified position\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        if (start == NULL)
        {
            temp->link = NULL;
            start = temp;
            end = temp;
        }
        else
        {
            while (p->link != NULL)
            {
                p = p->link;
            }
            p->link = temp;
            temp->link = NULL;
            end = temp;
        }
        printf("insertion successful\n");
        break;
    case 2:
    {
    l:  printf("enter the position at which you want to insert:\n");
        scanf("%d", &pos);
        if (pos == 1 && start == NULL)
        {
            temp->link = NULL;
            start = temp;
            end = temp;
        }
        else if (start == NULL && pos > 1)
            printf("sorry the list is empty so enter valid position\n");
        else if (pos == 1)
        {
            temp->link = start;
            start = temp;
        }
        else
        {
            while (p->link != NULL)
            {
                e++;
                p = p->link;
            }
            p = start;
            if (pos >= (e + 1) || pos <= 0)
            {
                printf("enter a valid position sir\n");
                goto l;
            }
            else
            {
                for (int i = 1; i < pos; i++)
                {
                    r = p;
                    p = p->link;
                }
                r->link = temp;
                temp->link = p;
                printf("insertion successful\n");
            }
        }
    }
    break;
    }
}
void deleten()
{
    int d, e = 1;
    p = start;
    while (p->link != NULL)
    {
        e++;
        p = p->link;
    }
    printf("enter the node number you want to delete:\n");
    scanf("%d", &d);
    if (d > e)
    {
        printf("plz enter a valid node\n");
        return;
    }
    else if (d == 1)
    {
        temp = start;
        start = start->link;
        deleten(temp);
    }
    else
    {
        p = start;
        for (int i = 1; i < d; i++)
        {
            r = p;
            p = p->link;
        }
        temp = p;
        if (p->link == NULL)
        {
            end = r;
        }
        r->link = p->link;
        delete (temp);
    }
}
void display()
{
    if (start == NULL)
        printf("sorry the list is empty\n");
    else if (start == end)
        printf("%d", start->data);
    else
    {
        p = start;
        while (p->link != NULL)
        {
            printf("%d\t", p->data);
            p = p->link;
        }
        printf("%d", end->data);
    }
}
int main()
{
    int c;
    start = NULL;
    end = NULL;
    do
    {
        printf("\nLINKED LIST MENU\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        printf("select the option that u want to do:\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            deleten();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    } while (c <= 4);
    getch();
    return 0;
}