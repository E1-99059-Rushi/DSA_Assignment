#include <stdio.h>
#define size 5

void insertion_sort(int arr[])
{
    int key;

    for(int i = 1; i < size; i++)
    {
        int j = i - 1;
        key = arr[i];

        while(j >= 0 && key > arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void display(int arr[])
{
    
    for(int i = 0 ; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[size] = { 2, 9, 4, 8, 3};

    printf("Array element : ");
    display(arr);
    printf("\n");

    insertion_sort(arr);

    printf("Sorted array : ");
    display(arr);
    printf("\n");

    return 0;

}    