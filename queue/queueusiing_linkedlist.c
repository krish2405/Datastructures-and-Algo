#include <stdio.h>
#include <stdlib.h>
struct Node *f = NULL;
struct Node *r = NULL;
struct Node
{
    int data;
    struct Node *next;
};
void enqueue(int val)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        printf("queue is full");
    }
    else
    {
        p->data = val;
        p->next = NULL;
        if (f == NULL)
        {
            f = r = p;
        }
        else
        {
            r->next = p;
            r = p;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        val = ptr->data;
        f = ptr->next;
        free(ptr);
        return val;
    }
}

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    enqueue(11);
    enqueue(22);
    enqueue(33);
    enqueue(44);
    enqueue(55);
    traversal(f);
    int returnedval=dequeue(f);
    printf("\n%d\n",returnedval);
    traversal(f);
    return 0;
}