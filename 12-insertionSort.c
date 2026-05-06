//Roll number - BCA254O15
//Program statement - Arrange the list of numbers in ascending order using Insertion Sort

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
void insertionSort(int arr[], int size){
    int i, j, temp;
    for(i = 1; i < size; i++){
        temp = arr[i];
        j = i - 1;
        while((j >= 0) && (arr[j] > temp)){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void main(){
    int arr[] = {7, 2, 10, 4, 1, 9, 3, 6, 8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting: \n");
    display(arr, size);
    insertionSort(arr, size);
    printf("\nArray after sorting: \n");
    display(arr, size);
}