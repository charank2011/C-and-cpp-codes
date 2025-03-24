#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
}*newnode,*front,*rear;
void reverse(struct queue *ptr);



int main()
{
    char ch;
   do
   {

   newnode=malloc(sizeof(struct queue));
    printf("Enter the element into the queue : ");
    scanf("%d",&newnode->data);
    if(front==NULL&&rear==NULL)
    {
        front=newnode;
        rear=newnode;
        newnode->next=NULL;
    }
    else 
    {
        rear->next=newnode;
        rear=newnode;
        newnode->next=NULL;
        


    }
    printf("Enter your choice : ");
    scanf(" %c",&ch);
}while(ch=='y');

   reverse(front);
   

}
void reverse(struct queue *ptr)
{
    if(ptr!=NULL)
    {
        reverse(ptr->next);
        printf("%d\t", ptr->data);
    }
}