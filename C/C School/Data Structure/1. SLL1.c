#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next; // next = link (address of next node)
} *head_node = NULL ,*current_node = NULL,*prev_node=NULL,*temp_node=NULL;

void insert();
    void insertFront(struct node*);
    void insertAtPosition(struct node*);
    void insertEnd(struct node*);
void delete();
void display();

int main() {
    int choice;
    while(1) {
        printf("\n\n\n*****Singly Linked List *****");
        printf("\n1.Enter\n2.Delete\n3.Display\n4.Exit");
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

    // current_node = head_node;
    printf("\n1.Insert at Beginning\n2.Insert at position after a number\n3.Insert Normally at End");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: insertFront(temp_node);
            break;
    case 2:
            insertAtPosition(temp_node);
            break;
    case 3:
            insertEnd(temp_node);
            break;
    default:
            break;
    }
}


void insertFront(struct node *temp_node) {
    printf("\nInsertfront called");
    if (head_node != NULL)
    {
        temp_node -> next = head_node;
    }
    head_node = temp_node;
     printf("\nInsertion Successful........");
}
void insertEnd(struct node *temp_node) {
    printf("\nInsertend called");
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
void insertAtPosition(struct node *temp_node)
{
        int count=0,pos=0;
        printf("\nEnter the position at which you want to insert:");
        scanf("%d", &pos);
        if ((pos == 1 && head_node == NULL) || (pos==1))
        {
            insertFront(temp_node);
        }
        else if (head_node == NULL && pos > 1){
            printf("sorry the list is empty so enter valid position\n");
            // goto l;
            // return;
        }
        else
        {
            current_node = head_node;
            while (current_node->next != NULL)
            {
                count++;
                current_node = current_node->next;
            }
            // count = 3;
            current_node = head_node;
            if (pos > (count + 1) || pos <= 0)
            {
                printf("enter a valid position \n");
                // goto l;
                // return;
            }
            else
            {
                for (int i = 1; i < pos; i++)
                {
                    prev_node = current_node;
                    current_node = current_node->next;
                }
                prev_node->next = temp_node;
                temp_node->next = current_node;
                printf("insertion successful\n");
            }
        }
}

void delete(){
    struct node *temp_node=head_node;
    int num;
    printf("\n what do you want to delete ?");
    scanf("%d",&num);
    if (head_node==NULL)
    {
        printf("\nLinked List is empty.");
        return;
    }
    if (temp_node!=NULL && temp_node->data==num)
    {
        head_node=temp_node->next;
        return;
        free(temp_node);
    }
    while (temp_node!=NULL && temp_node->data!=num)
    {
        prev_node=temp_node;
        temp_node=temp_node->next;
    }
    if (temp_node==NULL)
    {
        printf("\n Number not found ......");
        return;
    }
    
    prev_node->next=temp_node->next;
    
    free(temp_node);
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
