#include <stdio.h>
int main(){
    int n;
    int index;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter the values: ");
    for(int i = 0; i < n; i++){
        scanf("\n%d", &arr[i]);
    }
    printf("Index to delete: ");
    scanf("%d", &index);
    for(int i = index; i <= n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
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