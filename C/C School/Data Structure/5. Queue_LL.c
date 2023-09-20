#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next; // next = link (address of next node)
} *head_node = NULL ,*current_node = NULL,*prev_node=NULL,*temp_node=NULL;

void insert();
void delete();
void display();

int main() {
    int choice;
    while(1) {
        printf("\n\n\n*****Queue using Singly Linked List *****");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
                insert();
                current_node = head_node;
                display();
                break;
        case 2:       
                delete();
                current_node = head_node;
                display();
                break;
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
    int choice, data;
    printf("\nEnter the data to be inserted:");
    scanf("%d", &data);

    struct node *temp_node = (struct node*)malloc(sizeof(struct node));
    temp_node -> data = data;
    temp_node -> next = NULL ;

    if (head_node==NULL)
    {
        // insertFront(temp_node);
        head_node = temp_node;
        return;
    }
    current_node = head_node;
    while(current_node->next!=NULL){
        current_node = current_node->next;
    }
    current_node->next = temp_node;
     printf("\nInsertion Successful........");
}

void delete(){
    current_node=head_node;
    int num;
    if (head_node==NULL)
    {
        printf("\n Linked List is empty.");
        return;
    }
        head_node=current_node->next;
        return;
        free(current_node);
}

void display() {
    printf("\nDisplay called");
    if (head_node==NULL)
    {
        printf("\n Linked List is empty.");
        return;
    }
    printf("\nValue of LinkedList are: ");
    while (current_node!= NULL)
    {
        printf("%d ",current_node->data);
        current_node = current_node->next;
    } 
}
