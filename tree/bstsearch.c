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

void inorder(struct node *T)
{
    if (T != NULL)
    {
        inorder(T->left);
        printf("%d", T->data);
        inorder(T->right);
    }
}

struct node *search(struct node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (data == root->data)
    {
        return root;
    }
    else if (data < root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}

int main()
{

    struct node *p = createnode(5);

    struct node *p1 = createnode(3);

    struct node *p2 = createnode(6);

    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);

      struct node *k=NULL;
    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;
   struct node *n=search(k,6);
   if(n!=NULL)
   {
       printf("element found\n");
    
   }
  else{
    printf("element not found");
    }
   
    return 0;
}