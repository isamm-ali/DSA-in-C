//Roll number - BCA254O15
//Program statement - Arrange the list of numbers in ascending order using Merge Sort

#include <stdio.h>
void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(i == size - 1){
            printf("%d", arr[i]);
        }
        else{
            printf("%d, ", arr[i]);
        }
    }
}
void merge(int arr[], int low, int mid, int high){
    int i = low;
    int j = mid + 1;
    int k = low;
    int temp[100];
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
        }
        else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i <= mid){
        temp[k] = arr[i];
        i++; k++;
    }
    while(j <= high){
        temp[k] = arr[j];
        j++; k++;
    }
    for(i = low; i <= high; i++){
        arr[i] = temp[i];
    }
}
void mergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}
void main(){
    int arr[] = {7, 2, 10, 4, 1, 9, 3, 6, 8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting: \n");
    display(arr, size);
    mergeSort(arr, 0, size - 1);
    printf("\nArray after sorting: \n");
    display(arr, size);
}