#include<stdio.h>
#include<stdlib.h>

struct bstnode
{  int data;
    struct bstnode*left;
    struct bstnode*right;

};

struct bstnode* createnode(int data)
{
    struct bstnode*n=(struct bstnode*)malloc(sizeof(struct bstnode));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void insert(struct bstnode*root,int data)
{
    struct bstnode*par;
    struct bstnode*n=createnode(data);

    if(root==NULL)
    {
        root=n;

    }
    else
    {  par=root;
       while(par!=NULL)
       {
           if(data<root->data)
           {
               if(par->left==NULL)
               {  par->left=n;

               }
               else{
                   par=par->left;
               }
           }

           else if(data>par->data)
           {  
             if(par->right==NULL)
               {  par->right=n;

               }
               else
               {
                   par=par->right;
               }

           }

       }
    

    }


}

void inorder(struct bstnode*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
         inorder(root->right);

    }
}


struct bstnode* find(struct bstnode*root,int data)
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
    struct bstnode*p=createnode(5);

struct bstnode*p1=createnode(3);

struct bstnode*p2=createnode(6);

struct bstnode*p3=createnode(1);
struct bstnode*p4=createnode(4);

     p->left=p1;
     p->right=p2;

     p1->left=p3;
     p1->right=p4;


    // struct bstnode*q=find(p,2);

    
    insert(p,30);
    // insert(p,40);//insert(root,50);insert(root,60);
     

    //printf("founded noded is %d\n",&root);
    inorder(p);
    return 0;
    
}
