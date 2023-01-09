#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
 
struct node* newnode(int value)
{
    struct node* stacknode=(struct node *)malloc(sizeof(struct node));
    stacknode->data=value;
    stacknode->next=NULL;
     return stacknode;
}
 
int isempty(struct node*top)
{ if(top==NULL)
  {
      return 1;
  }
  else
  {
      return 0;
  }

}

int isfull(struct node*top)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
      if (p==NULL)
       { return 1;

     }
     else{
         return 0;
     }
           
}

struct  node* push(struct node*top ,int data)
{ if( isfull(top))
   {
       printf("stack overflow\n");
   }else
   {  struct node *n=newnode(data);
       n->next=top;
       top=n;
       return top;


   }
    
}


 void printlist(struct node*n)//this function will print the content of linked list
 {  while(n!=NULL)
    {
     printf("%d\n",n->data);
     n=n->next;

    }
 }
 int pop(struct node** top)
 {
     if(isempty(*top))
     {printf("stack underflow\n");
     }
     else
     {struct  node *p=*top;
        *top=(*top)->next;
        int x=p->data;
        free(p);
        return x;
     
        
     }
 }


int main()
{
     struct node *top=NULL;
     top=push(top,78);
     top=push(top,70);
     top=push(top,28);
     top=push(top,178);
     int element=pop(&top);
     printf("pooped element is %d\n",element);
     printlist(top);
     return 0;
     
 }
     
     
    
     
