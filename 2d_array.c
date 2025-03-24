#include<stdio.h>
int main()
{
    int i,j,key,n,gap;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(gap=n/2;gap>0;gap=gap/2)
    {
        for(i=gap;i<n;i++)
        {
            key=a[i];
            for(j=i-gap;key<a[j]&&j>=0;j=j-gap)
            {
                a[j+gap]=a[j];

            }
            a[j+gap]=key;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}