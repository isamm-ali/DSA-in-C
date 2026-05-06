#include <stdio.h>

int binarySearch(int arr[], int size, int num)
{
    int start, mid, end;
    start = 0;
    end = size - 1;
    while (start <= end){
        mid = (start + end) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        if (num > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
return -1;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    printf("Enter the number that you want to search: \n");
    scanf("%d", &num);
    int flag = binarySearch(arr, size, num);
    if (flag == -1)
    {
        printf("\nNot found.");
    }
    else
    {
        printf("\nFound at position: %d", flag + 1);
    }
}