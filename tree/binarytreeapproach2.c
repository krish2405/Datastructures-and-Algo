#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left,*right;
};

struct node*create()
{
    int data;
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    printf("press 0 to exit\n");
     printf("press 1 to create node\n");
     int choice;
     printf("enter choice\n");
     scanf("%d",&choice);
     if(choice==0)
     {
         return 0;
     }
     else
     {
         printf("enter data\n");
         scanf("%d",&data);
         n->data=data;
         n->left=NULL;
         n->right=NULL;
          printf("enter the left child\n");
        n->left=create();
        printf("enter the right child\n");
        n->right=create();

     }
     return n;

    
}

void preorder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);

    }
}


void inorder(struct node*T)
{
     if(T!=NULL)
     {     inorder(T->left);
          printf("%d",T->data);
           inorder(T->right);
     }
}

void postorder(struct node*T)
{
     if(T!=NULL)
     {
          postorder(T->left);
          postorder(T->right);
          printf("%d",T->data);
     }
}


struct node* find(struct node*root,int data)
{
    if(root==NULL)
    {
        printf("no element to show\n");
    }
    else
     {
        if(data<root->data)
     {
        return(find(root->left,data));
     }

     else if(data>root->data)
     {
        return(find(root->right,data));
     }

     return (root);

    }

}
int main()
{
    struct node* root;
    root=create();

    printf("preorder traversal  of binary tree\n");
    preorder(root);

     printf("\ninorder traversal of binary tree is\n");
     inorder(root);
     
     printf("\npostorder traversal of binary tree is\n");
     postorder(root);

    
    return 0;
}
