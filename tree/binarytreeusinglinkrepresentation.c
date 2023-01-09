#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node *left;
     struct node *right;
};

struct node *createnode(int data)
{
     struct node *n;
     n = (struct node *)malloc(sizeof(struct node));
     n->left = NULL;
     n->right = NULL;
     n->data = data;
     return n;
}
void preorder(struct node *root)
{
     if (root != NULL)
     {
          printf("%d", root->data);
          preorder(root->left);
          preorder(root->right);
     }
}

void inorder(struct node *T)
{
     if (T != NULL)
     {
          inorder(T->left);
          printf("%d", T->data);
          inorder(T->right);
     }
}

void postorder(struct node *T)
{
     if (T != NULL)
     {
          postorder(T->left);
          postorder(T->right);
          printf("%d", T->data);
     }
}

int main()
{ // {  //creating root node
     //     struct node*p;
     //     p=(struct node*)malloc(sizeof(struct node));
     //     p->left=NULL;
     //      p->right=NULL;
     //     p->data=1;

     //      //creating 2nd node
     //      struct node*p1;
     //     p1=(struct node*)malloc(sizeof(struct node));
     //     p1->left=NULL;
     //      p1->right=NULL;
     //       p1->data=2;

     // //creating 3rd node

     //        struct node*p2;
     //     p2=(struct node*)malloc(sizeof(struct node));
     //     p2->left=NULL;
     //      p2->right=NULL;
     //      p2->data=3;

     struct node *p = createnode(4);

     struct node *p1 = createnode(1);

     struct node *p2 = createnode(6);

     struct node *p3 = createnode(5);
     struct node *p4 = createnode(2);

     p->left = p1;
     p->right = p2;

     p1->left = p3;
     p1->right = p4;

   
     printf("preorder traversal of binary tree is\n");
     preorder(p);

     printf("\ninorder traversal of binary tree is\n");
     inorder(p);

     printf("\npostorder traversal of binary tree is\n");
     postorder(p);
     
     
     return 0;
}