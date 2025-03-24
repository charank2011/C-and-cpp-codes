#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,n,freq[26]={0},ans=0;
    char s[20],dup[20];
    printf("Enter the main string");
    scanf("%s",s);
    printf("ENter the dup string");
    scanf("%s",dup);
    for(i=0;i<strlen(s);i++)
    {
        freq[s[i]-'a']++;
    }
    for(i=0;i<strlen(dup);i++)
    {
        freq[dup[i]-'a']--;
    }
    for(i=0;i<26;i++)
    {
        if(freq[i]!=0){
        ans=1;
        break;}
        
    }
    if(ans==0)
    printf("YES");
    else
    printf("no");
    
    
    
    
}
