#include<stdio.h>
#include<stdbool.h>

bool isUgly(int n) {
    if(n==0)
    {
        return false;
    }
    while(n%2==0)
    {
        n/=2;
    }
    while(n%3==0)
    {
        n/=3;
    }
    while(n%5==0)
    {
        n/=5;
    }
    if(n!=1)
    {
        return false;
    }
    return true;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(isUgly(n))
    {
        printf("The number is ugly.\n");
    }
    else
    {
        printf("The number is not ugly.\n");
    }
    return 0;
}