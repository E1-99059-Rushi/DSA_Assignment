
#include <stdio.h>

int arr[] = {10, 20, 15, 3, 4, 4, 1};
int size = 7;

int find_rank(int x)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= x)
            count++;
    }

    return count;
}

int main()
{
    int x;

    printf("Enter element to find rank: ");
    scanf("%d", &x);

    int rank = find_rank(x);

    printf("Rank of %d is: %d\n", x, rank);

    return 0;
}
