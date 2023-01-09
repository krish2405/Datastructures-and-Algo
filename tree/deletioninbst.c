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
        printf("%d\t", T->data);
        inorder(T->right);
    }
}

struct node*inorderpre(struct node*root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}

struct node*delete(struct node*root,int data)
{    struct node*ipre=NULL;
    
     if(root==NULL)
  {
      return  NULL;
   }
   if(root->left==NULL&&root->right==NULL)
   {
       free(root);
       return NULL;
   }
    //search for node to be deleted
    if(data<root->data)
    {
       root->left=delete(root->left,data);
    
    }
    else if(data>root->data)
    {
      root->right= delete(root->right,data);
    
    }
    //deletion strategy when the node is found
    else
    {
        ipre=inorderpre(root);
        root->data=ipre->data;
        root->left=delete(root->left,ipre->data);

    }
}


int main()
{

    struct node *p = createnode(5);

    struct node *p1 = createnode(3);

    struct node *p2 = createnode(6);

    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);
    struct node *k= createnode(5);

    
    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;
    inorder(p);
    delete(p,5);
    printf("\n");
    inorder(p);

   
   
    return 0;
}