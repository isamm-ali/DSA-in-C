#include <stdio.h>
int main(){
    int m, n, p;
    printf("Enter m and n and p:\n");
    scanf("%d %d %d", &m, &n, &p);
    int arr1[m][n];
    int arr2[n][p];
    int arr3[m][p];
    printf("Enter the values in the first array:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the values in the second array:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            arr3[i][j] = 0;
            for(int k = 0; k < n; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];            }
        }
    }
    printf("Product of the two arrays:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d  ", arr3[i][j]);
        }
        printf("\n");
    }
}