#include <stdio.h>
int main(){
    int m, n;
    printf("Enter m and n:\n");
    scanf("%d %d", &m, &n);
    int arr1[m][n];
    int arr2[m][n];
    printf("Enter the values in the first array:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the values in the second array:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    int arr3[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Sum of the two arrays:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d  ", arr3[i][j]);
        }
        printf("\n");
    }
}