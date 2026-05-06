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
    for(int i = 0; i < n; i++){
        if(i == n-1){
            printf("%d", arr[i]);
        }
        else{
            printf("%d, ", arr[i]);
        }
    }
    return 0;
}