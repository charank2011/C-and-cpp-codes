#include<stdio.h>
void34 main () {
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("%d",sumOfSquares(n));
    return 0;
}
int sumOfSquares(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    
}
