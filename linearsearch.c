#include<stdio.h>
int main()
{
    int n,i,key,flag=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element to search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
        printf("\nkey is found at index= %d",i);
        flag=1;
        
       }


    }
    if(flag==0)
    {
        printf("not found");
    }


}