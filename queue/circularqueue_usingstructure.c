#include<stdio.h>
#include<stdlib.h>

struct queue 
{
    int size;
    int r,f;
    int*arr;
};

void enque(struct queue*q,int val)
{
    if(q->r==q->size-1)
    printf("queue overflow\n");
    else
    {
        
        q->r=q->r+1%q->size;
        q->arr[q->r]=val;
        printf("insertion successfull\n");
    }
}

void dequeue(struct queue*q)
{
  if(q->f==q->r)
  printf("queue underflow\n");
  else{
     
      q->f=q->f+1%q->size;
       printf("dequed element is %d\n",q->arr[q->f]);
  }
}

void display(struct queue*q)
{

   {
       for(int i=q->f+1;i<=q->r;i=i+1%q->size)
       {
           printf("%d\t",q->arr[i]);
       }
       printf("\n");
   }
}


int main()
{
    struct queue q;
    q.size=5;
    q.r=q.f=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));

    enque(&q,19);
    enque(&q,33);
    enque(&q,15);
    enque(&q,178);
     enque(&q,198);

   

     display(&q);


    

    return 0;
}