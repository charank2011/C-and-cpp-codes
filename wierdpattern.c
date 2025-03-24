#include<stdio.h>
int main () 
{
    int n=4;
    int matrix[n][n];
    int value = 1;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = value++;
        }
    }

    while (left <= right && top <= bottom) {
        // Print top row from left to right
        for (int i = left; i <= right; i++) {
            printf("%d%d\t", top, i);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            printf("%d%d\t", i, right);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d%d\t", bottom, i);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d%d\t", i, left);
            }
            left++;
        }
    }
}
