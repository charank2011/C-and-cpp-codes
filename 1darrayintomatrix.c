#include<stdio.h>
imt main()
{
    int original,originalSize,m,n,returnSize,returnColumnSizes;
    
}
int** construct2DArray(int* original, int originalSize, int m, int n, int* returnSize, int** returnColumnSizes) {

    if(originalSize!=m*n){
    *returnSize = 0;
    return NULL;
    }

    int** result = (int**)malloc((m)*sizeof(int*));
    for(int i=0;i<m;i++){
        result[i] = (int*)malloc((n)*sizeof(int));
    }
    int index = 0;
    *returnSize = m;
auto
    *returnColumnSizes = (int*)malloc(m * sizeof(int));

    for (int i = 0; i < m; i++) {
        (*returnColumnSizes)[i] = n;
        
    }

  

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[i][j] = original[index++];
        }
    }
    return result;
}
