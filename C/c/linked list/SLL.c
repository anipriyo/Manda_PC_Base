#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
} *head=NULL ,*first_node;

void insert();
    void insertFront(struct node*);
//     void insertMiddle(struct node*);
//     void insertEnd(struct node*);
// void Delete();
void display();

int main(){
    int choice;
    while(1){
        printf("\n1.Enter\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
                insert();
                break;
        // case 2:       
        //         Delete();
        //         break;
        case 3:
                display();
                break;
        case 4:
                exit(0);
                break;
        default:
            printf("\nWrong input , Try again. ");
            break;
        }
    }
    
    getch();
    return 0;
}

void insert(){
    int choice,data;
    printf("\nEnter the data to be inserted:");
    scanf("%d",&data);

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL ;

    printf("\n1.Insert at Beginning\n2.Insert at Middle\n3.Insert at End");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insertFront(temp);
        break;
    // case 2:
    //     insertMiddle(temp);
    //     break;
    // case 3:
    //     insertEnd(temp);
    //     break;
    
    default:
        break;
    }
}
void insertFront(struct node * temp){
    if (head==NULL)
    {
        head = temp; 
    }
    printf("\nInsertion Successful........");
}
void display()
{
    first_node=head;
    printf("\n");
    while (first_node!=NULL)
    {
        printf("%d",first_node->data);
        first_node=first_node->link;
    }
       
}