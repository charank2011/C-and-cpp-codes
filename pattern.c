#include <stdio.h>

int main() {
    int size ;
    scanf("%d",&size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int value = size - abs(i - size / 2) - abs(j - size / 2);
            printf("%d ", value);
        }
        printf("\n");
    }
    return 0;
}