#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*start , *ptr  ;
int main ()
{
    char choice;
   
    do
    {

    
    struct node *newnode =malloc ( sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    if(start == NULL)
    {
    start=newnode;
    ptr=newnode;
    }
    else
    {
        ptr->next=newnode;
        newnode->next = NULL;

        ptr=ptr->next;

    }
    printf("Enter your choice:");
    scanf(" %c",&choice);
    printf("\n");
    }while(choice == 'y');
     
    ptr=start;
    
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;

    }

}