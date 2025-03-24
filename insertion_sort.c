#include<stdio.h>
int main()
{
    int i,j,n,key;
    printf("Enter the size4 of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i-1;a[j]>key&&j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;

    }
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);

}
   
}