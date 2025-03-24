#include <stdio.h>
int main() {
    int n,sum();
    printf("Enter the number ");
    scanf("%d",&n);
    sum(n);
    return 0;
}
int sum(int n)
{
    int s;
    while (n >= 10 ) {
        s = 0 ;
        while (n > 0 ){
            s = s + (n % 10);
            n = n/10;
        }
        s = n ;
    }
    printf("%d",s);
    return 0 ;
}