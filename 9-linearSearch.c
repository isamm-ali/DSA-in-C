#include <stdio.h>

int linearSearch(int arr[], int size, int num){
    for(int i = 0; i <= size; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,67};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num;
    printf("Enter the number that you want to search: \n");
    scanf("%d", &num);
    int flag = linearSearch(arr, size, num);
    if(flag == -1){
        printf("\nNot found.");
    }
    else {
        printf("\nFound at position: %d", flag+1);
    }
}