#include<stdio.h>
int main()
{
    int a[10],i,sum,avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);

    }
    for(i=0;i<n-1;i++)
    {
    sum = sum + a[i];
    }
    avg=sum/n;
    for(i=0;i<n-1;i++)
    {
    if(avg<a[i])
    printf("%d",a[i]);
    else
    continue;
    }
}