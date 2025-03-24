#include<stdio.h>
void quicksort(int a[], int first, int last);
int main()
{
    int n,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 quicksort(a,0,n-1);
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}
void quicksort(int a[],int first,int last)
{
    if(first<last)
    {
    int i,j,p,c;
    i=first;
    p=first;
    j=last;
    while(i<j)
    {
        while(a[i]<=a[p]&&i<last)
        {
            i++;
        }
        while(a[j]>a[p])
        {
            j--;
        }
        if(i<j)
        {
          c=a[i];
          a[i]=a[j];
          a[j]=c;
        }
    }
    c=a[j];
    a[j]=a[p];
    a[p]=c;
    
    quicksort(a,first,j-1);
    quicksort(a,j+1,last);
    }
    
    
}