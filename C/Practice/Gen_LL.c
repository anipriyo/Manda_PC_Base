#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node * next ;
}*head_node=NULL,*current_node=NULL,*prev_node=NULL,*temp_node=NULL;
void insert();
    void insertfront(struct node*);
    void insertend(struct node*);
void delete();
    void deletefront();
    void deletelast();
void display(){
    if(head_node==NULL)
        printf("\nList is empty");
    else{
        current_node=head_node;
        printf("\nThe List Contains :");
        while(current_node->next!=NULL)
        {
            int val=current_node->data;
            printf(" %d ",val);
            current_node = current_node->next;
        }
    }
}
int main()
{
    int choice;
    while(1){
        printf("\nLinked List Menu");
        printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit");
        printf("\nEnter your choioce :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            current_node=head_node;
            display();
            break;
        case 2:
            delete();
            current_node=head_node;
            display();
            break;
        case 3:
            display();
            current_node=head_node;
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong choice");
            break;
        }
        
    }
    return 0;
}
void insert(){
    int val,choice;
    struct node* temp_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of the node:");
    scanf("%d",&val);
    temp_node->data=val;
    temp_node->next=NULL;
    printf("\n1.InsertFront\n2.InsertEnd");
    printf("\nEnter your choioce :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insertfront(temp_node);
        current_node = head_node;
        break;
    case 2:
        insertend(temp_node);
        current_node = head_node;
        break;
    default:
        printf("\nWrong choice");
        break;
    }
}
void insertfront(struct node * temp_node){
    if(head_node!=NULL){
        temp_node->next=head_node;
    }
        head_node=temp_node;
        printf("\nInsertion Successful....");
}
void insertend(struct node * temp_node){
    if(head_node==NULL){
        head_node=temp_node;
        return;
    }
    else{
        current_node=head_node;
        while (current_node->next!=NULL)
        {
            current_node=current_node->next;
        }
        current_node->next=temp_node;
        printf("\nInsertion Successful....");
    }
}
void delete(){
    int choice;
    printf("\n1.DeleteFront\n2.DeleteEnd");
    printf("\nEnter your choioce :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        deletefront();
        current_node = head_node;
        break;
    case 2:
        deletelast();
        current_node = head_node;
        break;
    default:
        printf("\nWrong choice");
        break;
    }
}
void deletefront(){
    if (head_node==NULL)
    {
        printf("\nThe List is empty");
    }
    else
    {
        current_node=head_node;
        head_node=current_node->next;
    }
    printf("\nDeletion Successful...");
}
void deletelast(){
    if (head_node==NULL)
    {
        printf("\nThe List is empty");
    }
    else
    {
        current_node=head_node;
        prev_node=head_node;
        while (current_node->next!=NULL)
        {
            prev_node=current_node;
            current_node=current_node->next;
        }
        prev_node->next=NULL;
        printf("\nDeletion Successful...");
    }
}