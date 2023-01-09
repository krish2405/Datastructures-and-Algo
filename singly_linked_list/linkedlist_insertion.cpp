#include <iostream>
using namespace std;
 class Node
 {public:
   int data;
   Node*next ;

 };

 void printlist(Node*n)//this function will print the content of linked list
 {  while(n!=NULL)
    {
     cout<<n->data<<" ";
     n=n->next;

    }
    cout<<endl;
 }

Node * insertatbeginning(Node*head,int element)//inserting a node at the beggining
 {
     Node*new_node=new Node();
     new_node->next=head;
     new_node->data=element;
     return new_node;

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

     printlist(head);
     head=insertatbeginning(head,45);
       printlist(head);

      return 0;



 }