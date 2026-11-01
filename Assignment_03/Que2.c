#include <stdio.h>
#define size 5

int arr[] ={ 12, 6, 38, 9, 25};

typedef struct data{
    int top ;
    int arr[size];
}stack_t;

stack_t s1;

void stack_init(stack_t *s1)
{
        s1->top = -1;
}
void push(stack_t *s1, int arr[])
{
    for(int i = 0; i < size; i++)
    {
        s1->top++;
        s1->arr[s1->top] = arr[i];
    }
}

void pop(stack_t *s1)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = s1->arr[s1->top];
        s1->top--;
    }
}

void display()
{
    for (int i = 0; i < size; i++)
        printf("%d  ",arr[i]);
    printf("\n");
}

int main()
{
    stack_init(&s1);
    printf("Array elements : ");
    display();

    push(&s1, arr);
    pop(&s1);

    printf("Reverse array  :  ");
    display();


    return 0;
}