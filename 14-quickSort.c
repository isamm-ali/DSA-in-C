//Roll number - BCA254O15
//Program statement - Arrange the list of numbers in ascending order using Quick Sort

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
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while(1){
        while(i <= high && arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < j){
            swap(&arr[i], &arr[j]);
        }
        else{
            break;
        }
    }

    swap(&arr[low], &arr[j]);
    return j;
}
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
void main(){
    int arr[] = {7, 2, 10, 4, 1, 9, 3, 6, 8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting: \n");
    display(arr, size);
    quickSort(arr, 0, size - 1);
    printf("\nArray after sorting: \n");
    display(arr, size);
}