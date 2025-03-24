#include<stdio.h>
void mergesort(int a[],int i,int j);
void combine(int a[],int i1,int i2,int j1,int j2);
int main()
{
    int i,n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("The sorted array is \n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void mergesort(int a[],int i,int j) 
{ 
    int mid; 
    if(i<j)
    { 
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        combine(a,i,mid,mid+1,j);


    }
}
void combine(int a[],int i1,int i2,int j1,int j2)
{
    int c[10],k=0,i,j;
    
    i=i1;
    j=j1;
    while(i<=i2&&j<=j2)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=a[j];
            j++;
            k++;

        }
    }
    while(i<=i2)
    {
        c[k]=a[i];
        i++;
        k++;

    }
    while(j<=j2)
    {
        c[k]=a[j];
        j++;
        k++;
    }
    i=i1;
    j=0;
    while(i<=j2)
    {
        a[i]=c[j];
        i++;
        j++;
    }
     
    
}