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
    q1->rear = -1;
    q1->front = -1;
}

void enqueue(queue_t *q1, int val)
{
    if(isFull(q1))
        printf("queue is full\n"); 

    else
    {
        q1->rear = (q1->rear + 1) % size;

        q1->arr[q1->rear] = val;

        if(q1->front == -1)
            q1->front = 0;
    }
}

void dequeue(queue_t *q1)
{
    if(isEmpty(q1))
        printf("queue is empty\n");

    else
    {
        int val = peek(q1);

        q1->arr[q1->front] = 0;

        if(q1->front == q1->rear)
            {
                q1->rear = -1;
                q1->front = -1;
            }
        
        else
        q1->front = (q1->front + 1) % size;

        printf("Deleted value : %d\n", val);
    }
}

int peek(queue_t *q1)
{
     return q1->arr[q1->front];
}

int isFull(queue_t *q1)
{
    if((q1->rear +1) % size == q1->front)
        return 1;
    else
        return 0;   
}

int isEmpty(queue_t *q1)
{
    if(q1->rear == -1)
            return 1;
    else    
        return 0;        
}

void count(queue_t *q1)
{
    int cnt = 0;

    if(isEmpty(q1))
        cnt = 0;

    else if(q1->rear >= q1->front)
        cnt = q1->rear - q1->front + 1;

    else
        cnt = size - q1->front + q1->rear + 1;

    printf("Count : %d\n", cnt);
}

int main()
{
    init_queue(&q1);
    int choice;
    do
    {
        printf("0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Count\nEnter choice:");
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
            case 4:
                    count(&q1);
                    break;
            default:
                    printf("Invalid choice!!!\n");            
                
        }

    } while (choice != 0);
    
    
    return 0;
}