#include<stdio.h>
#include<string.h>
int main ()
{
    char a[10];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0)
        printf("%c",a[i]);
       
        if(a[i]==' ')
        printf("%c",a[i+1]);
    }
}
    

