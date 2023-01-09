#include <iostream>
using namespace std;
 class Node
 {public:
   int data;
   Node*next ;

 };

/* void insertatindex(Node*prev_node,int element)
 {
       Node*new_node=new Node();
       new_node->next=prev_node->next;
       new_node->data=element;
       prev_node->next=new_node;

}*/

Node * insertatindex(Node*head,int index,int element)
{
  Node*new_node=new Node();
  Node*p=head;
  int i=0;
  while(i!=index-1)
  {
      p=p->next;
      i++;
  }

  new_node->next=p->next;
  new_node->data=element;
  p->next=new_node;
  return head;

}

 void printlist(Node*n)//this function will print the content of linked list
 {  while(n!=NULL)
    {
     cout<<n->data<<" ";
     n=n->next;

    }
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
         
    head= insertatindex(head,1,78);
      printlist(head);
      return 0;



 }