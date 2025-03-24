#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("enter the no of elements in the array ");
    scanf("%d",&n);
    printf("enter the array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        printf("%d",a[i]*5);
        else
        printf("%d",a[i]+10);    
    }
}