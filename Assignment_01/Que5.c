
#include <stdio.h>

int arr1[11] = {1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8};

void non_repeat()
{
    for (int i = 0; i < 11; i++)
    {
        int count = 0;

        for (int j = 0; j < 11; j++)
        {
            if (arr1[i] == arr1[j])
                count++;
        }

        if (count == 1)
        {
            printf("First non repeating element: %d\n", arr1[i]);
            break;
        }
    }
}

int main()
{
    printf("Program started..\n");
    non_repeat();

    return 0;
}
