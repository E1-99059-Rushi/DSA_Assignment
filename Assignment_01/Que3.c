#include <stdio.h>

#define size 5

int arr[size] = { 55, 44, 33, 22, 11};

int binary_search(int key)
{
    int left = 0;
    int right = 4;
    int mid;
       for(int i= 0; i < size ; i++)
       {
            mid = (left + right)/2;

            if(arr[mid] == key)
                return mid;

            else if(key > arr[mid])
                   right = mid -1;
           
            else if(key < arr[mid])
                    left = mid +1 ;        
                   
       }
}

int main()
{
    int key;
    printf("Enter key: ");
    scanf("%d", &key);

   int val = binary_search(key);

   printf("key found at index: %d\n", val);
    
    return 0;
}