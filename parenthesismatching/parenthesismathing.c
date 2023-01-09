#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    char *arr;
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

void push(stack *ptr,char value)
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

char pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow...cannot pop any value");
        return -1;
    }
    else{
        char poopedvalue=ptr->arr[ptr->top];
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

int parenthesismatch(char* exp)
{ stack *sp;
  sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size *sizeof(char));

    for(int i=0;exp[i]!='\0';i++)
    {
      if(exp[i]=='(')
      {
          push(sp,'(');
      }

     else if(exp[i]==')' )
     { if(isEmpty(sp))
        {
            return 0;
        }
        pop(sp);

     }

    }
    if(isEmpty(sp))
    {
        return 1;
    }
    return 0;
}


int main()
{   char *exp="6*(24))"; 
    if(parenthesismatch(exp))
    {
        printf("parenthesis is matching\n");
    }
    else
    {
            printf("parenthesis is not matching\n");
    }
    
    return 0;
}