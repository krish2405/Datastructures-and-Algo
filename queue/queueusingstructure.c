#include<stdio.h>
#include<stdlib.h>

struct Queue
{int size;
 int r;
 int f;
 int *arr;

};

void enqueue(struct Queue*q,int val)
{
    if(q->r==q->size-1)
    {
        printf("Queue is empty\n");
    }
    else{q->f=0;
        q->r=q->r+1;
        q->arr[q->r]=val;
        printf("insertion successfull\n");
        printf("%d\n",val);
    }
}

void display(struct Queue*q)
{
    if(q->r==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(int i=q->f;i<=q->r;i++)
        printf("%d\t",q->arr[i]);
    }
}

void deque( struct Queue*q)
{
    if(q->f==-1)
    {
        printf("##queue is empty\n");
    }
    else
    {
        printf("deleted item is %d\n",q->arr[q->f]);
        q->f=q->f+1;
        if(q->f>q->r)
        {
            q->r=q->f=-1;
        }
    }
}

int main()
{
    struct Queue q;
    q.size=100;
    q.f=-1;
     q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));

    enqueue(&q,100);
    enqueue(&q,10);
    enqueue(&q,102);
    display(&q);
    deque(&q);
    deque(&q);
    deque(&q);
    deque(&q);
    display(&q);
    return 0;
    
}