#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;

    printf("Enter the size of the square: ");
    scanf("%d", &n);

    while (n > 0) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i == 1 || i == n || j == 1 || j == n) {
                    printf("%d ",n);
                     // Print a fixed character instead of n
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
        n--;
    }

    return 0;
}