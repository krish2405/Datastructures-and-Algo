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
      return 0;



 }