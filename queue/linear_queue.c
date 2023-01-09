#include<stdio.h>

  int queue[10];int rear=-1;int front=-1;int size=10;

void enque(int value)
{
    if(rear==size-1)
    {
        printf("queue is full\n");
    }
    else
    {
        if (front=-1)
        {
            front=0;
            rear++;
            queue[rear]=value;
            printf("insertion is successfull\n");
        }

    }
}

void deque()
{
    if(front==-1)
    {  printf("queue is empty\n");

    }
    else
    {
        printf("dequed element is %d\n",queue[front]);
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }

    }
}

void display()
{
    if(front==-1)
    {
        printf("queue is empty\n");

    }
    else
    {
      for(int i=front;i<=rear;i++)
      {
          printf("%d\t",queue[i]);
      }
    }
}

int main()
{   
    enque(24);
     enque(3);
      enque(278);
    display();
     deque();
     deque();
     deque();

    display();
    return 0;
}