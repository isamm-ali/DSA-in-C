//Roll number - BCA254O15
//Program statement - Arrange the list of numbers in ascending order using Selection Sort

#include <stdio.h>
void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(i == size -1){
            printf("%d", arr[i]);
        }
        else {
        printf("%d, ", arr[i]);
        }
    }
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int size){
    int i, j, indexMin;
    for(i = 0; i < size - 1; i++){
        indexMin = i;
        for(j = i+1; j < size; j++){
            if (arr[indexMin] > arr[j]){
                indexMin = j;
            }
        }
        swap(&arr[indexMin], &arr[i]);
    }
}
void main(){
    int arr[] = {7, 2, 10, 4, 1, 9, 3, 6, 8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting: \n");
    display(arr, size);
    selectionSort(arr, size);
    printf("\nArray after sorting: \n");
    display(arr, size);
}