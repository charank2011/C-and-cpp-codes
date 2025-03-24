#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,j,x=0,y=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        x++;
        
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        y++;
        if(x==y)
        for(j=i+1;a[j]!='\0';j++)
        {
        printf("%c",a[j]);
       break;
        }
         
    }

}