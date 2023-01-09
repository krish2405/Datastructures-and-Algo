#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *arr;
} stack;

int isFull(stack*ptr)
{ if(ptr->top==ptr->size-1)
   {
       return 1;
   }
   else
   {
       return 0;
   }

}
int isEmpty(stack*ptr)
{
  if(ptr->top==-1)
  {
      return 1;
  }
  else{
      return 0;
  }

}

void push(stack *ptr,int value)
{ if(isFull(ptr))
  {
      printf("stackoverflow cannot push %d to the stack\n",value);
  }
  else
  {
   ptr->top++;
   ptr->arr[ptr->top]=value;

  }

}

int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow...cannot pop any value");
        return -1;
    }
    else{
        int poopedvalue=ptr->arr[ptr->top];
        ptr->top--;
        return poopedvalue;
    }
}

int peek(stack *ptr,int i)
{
    if(ptr->top-i+1<0)
    {
        printf("not valid position");
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top-i+1];
    }
}

int stacktop(stack* ptr)
{
    return ptr->arr[ptr->top];
}

int stackbottom(stack *ptr)
{
    return ptr->arr[0];
}
int main()
{   stack *sp=(stack*)malloc(sizeof(stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size *sizeof(int));
    printf("before pushing ,full%d\n",isFull(sp));
     printf("after pushing ,empty%d\n",isEmpty(sp));
     /*int num;
     int val;
     printf("number of inputs\n");
     scanf("%d",&num);
     for(int i=1;i<=num;i++)
     {printf("Enter the value\n");
       scanf("%d",&val);*/

     push(sp,1);
     push(sp,2);
     push(sp,3);
     push(sp,4);
     push(sp,5);
     push(sp,6);
     push(sp,7);
     push(sp,8);
     push(sp,18);
    push(sp,38);
     push(sp,138);



     //int val=pop(sp);

     for(int j =1;j<=sp->top+1;j++)
      { printf("the value at position %d is %d\n",j,peek(sp,j));

     }
    
     printf("After pushing ,FULL%d\n",isFull(sp));
     printf("After pushing ,EMpty%d\n",isEmpty(sp));
     // printf("the pooped value is .%d\n",val);//last in first out
     printf("stacktop is =%d\n",stacktop(sp));
      printf("stackbottom is =%d\n",stackbottom(sp));
    return 0;
}