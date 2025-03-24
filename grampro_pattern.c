#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "GRAMPRO"; 
    int i,j,k;
    
    for(i=0;i<strlen(str);i++)
    {
        for(j=0;j<strlen(str)-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%c",str[k]);
        }
        printf("\n");
    }
}