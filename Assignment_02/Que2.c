#include <stdio.h>
#include <stdlib.h>

#define size 5


typedef struct data{
    int arr[size];
    int rear;
    int front;
}queue_t;

queue_t q1;

void init_queue(queue_t *q1);
void enqueue(queue_t *q1, int val);
void dequeue(queue_t *q1);
int peek(queue_t *q1);
int isFull(queue_t *q1);
int isEmpty(queue_t *q1);




void init_queue(queue_t *q1)
{
    q1->rear = 0;
    q1->front = 0;
}

void enqueue(queue_t *q1, int val)
{
    if(isFull(q1))
        printf("queue is full\n"); 

    else{
    q1->arr[q1->rear] = val;

    q1->rear++;

    if(q1->front == -1)
        q1->front = 0;
}
}
void dequeue(queue_t *q1)
{
    if(isEmpty(q1))
        printf("queue is empty\n");

    else{
    int val = peek(q1);

    q1->arr[q1->front] = 0;
    
    q1->front++;

    printf("Deleted value : %d\n", val);
}
}

int peek(queue_t *q1)
{
     return q1->arr[q1->front];
}

int isFull(queue_t *q1)
{
    if(q1->rear == size)
        return 1;
    else
        return 0;   
}

int isEmpty(queue_t *q1)
{
    if(q1->rear == q1->front)
            return 1;
    else    
        return 0;        
}


int main()
{
    init_queue(&q1);
    int choice;
    do
    {
        printf("0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\nEnter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:
                    exit(0);
            case 1:
                    int val1;
                    printf("Enter number : ");
                    scanf("%d",&val1);
                    enqueue(&q1,val1);
                    break;
            case 2:
                    dequeue(&q1);
                    break;
            case 3:
                    int val2 = peek(&q1);
                    printf("frontmost value of Queue : %d\n",val2);   
                    break;
            default:
                    printf("Invalid choice!!!\n");            
                
        }

    } while (choice != 0);
    
    
    return 0;
}