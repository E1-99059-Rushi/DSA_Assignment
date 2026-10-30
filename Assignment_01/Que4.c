#include <stdio.h>

int size, count, flag = 0;
int linear_search(int arr[], int key)
{
        for(int  i = 0; i < size; i++)
        {
            if(key == arr[i])
            {
                count++;
               flag =1;
            }
        }
        if(flag == 0)
            return -1;
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

    printf("Enter key to search count:");
    scanf("%d", &key);
        
    int val =linear_search(arr, key);

    if(val == -1)
        printf("key not found \n");
    
    else
        printf("count of element %d is: %d\n",key, count);    
        

    return 0;
}