#include<stdio.h>

int main()
{
    int j,n;
    char a[20];
    
    printf("Enter the number of characters in the array: ");
    scanf("%d", &n);
    
    printf("Enter the characters: ");
    for(j = 0; j < n; j++)
    {
        scanf(" %c", &a[j]);
    }
    
    printf("\nThe vowels in the array are: \n");
    for(j = 0; j < n; j++)
    {
        if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u' ||
           a[j]=='A' || a[j]=='E' || a[j]=='I' || a[j]=='O' || a[j]=='U')
        {
            printf("%c ", a[j]);
        }
    }
    
    printf("\nThe consonants in the array are: \n");
    for(j = 0; j < n; j++)
    {
        if((a[j] >= 'a' && a[j] <= 'z' || a[j] >= 'A' && a[j] <= 'Z') &&
           !(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u' ||
             a[j]=='A' || a[j]=='E' || a[j]=='I' || a[j]=='O' || a[j]=='U'))
        {
            printf("%c ", a[j]);
        }
    }
    
    return 0;
}
