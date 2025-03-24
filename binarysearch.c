#include<stdio.h>
int main()
{
    int i,n,start=0,end,key,mid;
    printf("Enter the number of elements in the array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemnets");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    end=n-1;
    printf("Enter trhe key element: ");
    scanf("%d",&key);
    while(start<=end)
    {
        mid=(start+end)/2;
        if(key==a[mid])
        {
        printf("key found at index %d",mid);
        return 0;
        }
        else if(key<a[mid])
        end=mid-1;
        else if(key>a[mid])
        start=mid+1;
    }
    

}