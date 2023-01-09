#include <iostream>
using namespace std;
 class Node
 {public:
   int data;
   Node*next ;

 };

 void printlist(Node*head)//this function will print the content of linked list
 {  Node*ptr= head;
    
     
     do
     {cout<<ptr->data<<" ";
        ptr=ptr->next;
         
     } while (ptr!=head);

     cout<<endl;
     
    
 }
 //case1 :insert at first;

  Node* insertatfirst(Node* head,int data)
  {
     Node* new_node= new Node();
     new_node->data=data;
     Node*p=head->next;
     while(p->next!=head)
     {
         p=p->next;
     }
     //at this point p will point to head of the circular linked list
     p->next=new_node;
     new_node->next=head;
     head =new_node;
     return head;

  }

  Node* insertatindex(Node *head,int index,int data)
  {
      Node *new_node=new Node();
      Node * p=head;
      int i =0;
      while( i<index-1)
      {  
           p=p->next;
           i++;
    
      }
      new_node->next=p->next;
      new_node->data=data;
      p->next=new_node;
      return head;


  }



 int main()
 {     //declaring 3 nodes in heap
     Node*head=NULL;
     Node*second=NULL;
     Node*third=NULL;
     Node*fourth=NULL;

      //allocate 3 node in the heap
     head=new Node();
     second=new Node();
     third=new Node();
     fourth=new Node();
      
      //assigning value and linking each node with other
      head->data=7;
      head->next =second;
      
       second->data=3;
      second->next =third;

       third->data=17;
      third->next =fourth;

      fourth->data=100;
      fourth->next =head;


      printlist(head);

      cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

      head=insertatindex(head,2,80);

      printlist(head);
    

     return 0;



 }