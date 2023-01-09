#include <iostream>
using namespace std;
 class Node
 {public:
   int data;
   Node*next ;

 };

 Node *insertatend(Node* head,int element)
 {
     Node *new_node=new Node();
     new_node->data=element;
     Node*p=head;
     while(p->next!=NULL)
     {
         p=p->next;
     }
     p->next=new_node;
     new_node->next=NULL;
     return head;
 }


 void printlist(Node*n)//this function will print the content of linked list
 {  while(n!=NULL)
    {
     cout<<n->data<<" ";
     n=n->next;

    }
    cout<<endl;
 }

 int main()
 {     //declaring 3 nodes in heap
     Node*head=NULL;
     Node*second=NULL;
     Node*third=NULL;

      //allocate 3 node in the heap
     head=new Node();
     second=new Node();
     third=new Node();
      
      //assigning value and linking each node with other
      head->data=7;
      head->next =second;
      
       second->data=3;
      second->next =third;

       third->data=17;
      third->next =NULL;

      cout<<"linklist before insertion"<<endl;
      printlist(head);

      head=insertatend(head,100);

      cout<<"linklist after insertion at end"<<endl;
      printlist(head);
      return 0;



 }