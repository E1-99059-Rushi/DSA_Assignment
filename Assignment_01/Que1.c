#include <stdio.h>

int size , val;
void linear_search(int arr[], int key)
{
        for(int  i = 0; i < size; i++)
        {
            if(key == arr[i])
             val = i;
        }
        printf("last index of key : %d\n",val);
}


int main()
{
    
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];
    int key;

    printf("Enter array element: ");
    for(int i =0 ; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter key to search index:");
    scanf("%d", &key);
        
    linear_search(arr, key);

    return 0;
}