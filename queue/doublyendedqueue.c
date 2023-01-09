#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int r;
    int f;
    int *arr;
};

void enquefront(struct queue *q, int val)
{
    if (q->f == q->r + 1 || q->f == 0 && q->r == q->size - 1)
    {
        printf("queue is full");
    }
    else if (q->r == -1 && q->f == -1)
    {
        q->r = q->f = 0;
        q->arr[q->f] = val;
    }
    else if (q->f == 0)
    {

        q->f = q->size - 1;
        q->arr[q->f] = val;
    }
    else
    {
        q->f--;
        q->arr[q->f] = val;
    }
}

void enquerear(struct queue *q, int val)
{
    if (q->f == q->r + 1 || q->f == 0 && q->r == q->size - 1)
    {
        printf("queue is full");
    }
    else if (q->r == -1 && q->f == -1)
    {
        q->r = q->f = 0;
        q->arr[q->r] = val;
    }

    else if (q->r == q->size - 1)
    {
        q->r = 0;
        q->arr[q->r] = val;
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

void display(struct queue *q)
{
    if (q->f == -1 && q->r == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for (int i = q->f; i <= q->r; i = i + 1 % q->size)
        {
            printf("%d\t", q->arr[i]);
            printf("\n%d",i);
        }
    }
}

int main()
{
    struct queue q;
    q.size = 5;
    q.r = q.f = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

     enquefront(&q, 26);
     enquefront(&q, 27);
     enquefront(&q, 67);
     enquefront(&q, 287);
     enquefront(&q, 127);
     display(&q);

    return 0;
}