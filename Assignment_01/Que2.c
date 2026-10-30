
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

typedef struct data {
    int empid;
    char name[50];
} data_t;

data_t d1[SIZE];
int indx = 0;

void search_info()
{
    int id;
    printf("Enter employee id: ");
    scanf("%d", &id);

    for (int i = 0; i < indx; i++)
    {
        if (id == d1[i].empid)
        {
            printf("Employee id   : %d\n", d1[i].empid);
            printf("Employee name : %s\n", d1[i].name);
            return;
        }
    }

    printf("Employee not found!\n");
}

void store_info()
{
    
    printf("Enter employee id: ");
    scanf("%d", &d1[indx].empid);

    printf("Enter name: ");
    scanf(" %[^\n]s", d1[indx].name);

    indx++;

}

int main()
{
    int choice;

    do {
        printf("\n0. Exit\n1. Insert\n2. Search\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 0:
                exit(0);

            case 1:
                store_info();
                break;

            case 2:
                search_info();
                break;

            default:
                printf("Invalid choice!!!\n");
        }

    } while(choice != 0);

    return 0;
}
