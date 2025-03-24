#include<stdio.h>
struct node
{
    int data;
    struct node *next;

};
int main()
{
    struct node *head,*ptr,*newnode;
    newnode=malloc(sizeof(struct node));
    printf("Enter the data ");
    scanf("%d",newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL; 
    }
    else

    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;

        }
        ptr->next=newnode;
        newnode->next=NULL;


    }
}