#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node* createnode(int data)
{
     struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->left=NULL;
     n->right=NULL;
     n->data=data;
     return n;

}


void inorder(struct node*T)
{
     if(T!=NULL)
     {     inorder(T->left);
          printf("%d",T->data);
           inorder(T->right);
     }
}


void insert(struct node *root, int data)
{
    struct node *prev=NULL;
    struct node *n = createnode(data);

    if (root == NULL)
    {
        root = n;
    }
    else
    {
        while (root != NULL)
        {   prev=root;
           if(data<root->data)
           {
               printf("cannot insert %d,already in bst",data);
           }
           else if(data<root->data)
           {
               root=root->left;
           }
           else
           {
               root=root->right;

           }
     }
     if(data<prev->data)
     {  prev->left=n;

     }
     else
      {prev->right=n;}
    }
    
}

int main()
{

struct node*p=createnode(5);

struct node*p1=createnode(3);

struct node*p2=createnode(6);

struct node*p3=createnode(1);
struct node*p4=createnode(4);

     p->left=p1;
     p->right=p2;

     p1->left=p3;
     p1->right=p4;


    
      insert(p, 30);
   printf("%d\n",p->right->right->data);

     printf("\ninorder traversal of binary tree is\n");
     inorder(p);
     
     

     return 0;




}