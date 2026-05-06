#include <stdio.h>
int main(){
    int n;
    int val; int index;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter the values: ");
    for(int i = 0; i < n; i++){
        scanf("\n%d", &arr[i]);
    }
    printf("Insert: ");
    scanf("%d", &val);
    printf("Index: ");
    scanf("%d", &index);
    for(int i = n-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = val;
    n++;
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