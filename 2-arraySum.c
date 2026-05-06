#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values: ");
    for(int i = 0; i < n; i++){
        scanf("\n%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    printf("Sum = %d", sum);
    return 0;
}