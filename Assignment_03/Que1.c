#include <stdio.h>
#include <stdlib.h>
#define size  5

typedef struct data
{
    int top;
    int arr[size];
}stack_t;

stack_t s1;
void stack_init(stack_t *s1);
void push(stack_t *s1, int val);
void pop(stack_t *s1);
int isEmpty(stack_t *s1);
int isFull(stack_t *s1);
int peek(stack_t *s1);
int count(stack_t *s1);


void stack_init(stack_t *s1)
{
    s1->top = size;
}

void push(stack_t *s1, int val)
{
    if(isFull(s1))
        printf("stack is full!!!\n");
    else
    {
         s1->top--;
         s1->arr[s1->top] = val;  
    }
}

void pop(stack_t *s1)
{
    if(isEmpty(s1))
        printf("stack is empty!!!\n");
    else
    {
        int val = peek(s1);
        s1->arr[s1->top] = 0;
        s1->top++;
        printf("Deleted element : %d\n",val);
    }
}

int isEmpty(stack_t *s1)
{
    if(s1->top == size)
            return 1;
    else
            return 0;
}

int isFull(stack_t *s1)
{
    if(s1->top == 0)
        return 1;
    else    
        return 0;
}

int peek(stack_t *s1)
{
    return s1->arr[s1->top];
}

int count(stack_t *s1)
{
    if(isEmpty(s1))
        return 0;
    else
        return size - s1->top;
}

int main()
{
    stack_init(&s1);
    int choice;
    int val;
    do
    {
        printf("0.Exit\n1.Push\n2.POP\n3.Peek\n4.Count\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:
                    exit(0);
            case 1:
                    printf("Enter number : ");
                    scanf("%d",&val);
                    push(&s1,val);
                    break;
            case 2:
                    pop(&s1);
                    break;
            case 3:
                    val = peek(&s1);
                    printf("Bottom most element in stack: %d \n",val);
                    break;
            case 4:
                    val = count(&s1);
                    printf("Count : %d",val);
                    break;
            default:
                    printf("Invalid choice!!!\n");
        }   
    
    }while(choice != 0);

    return 0;
}