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
//case 1:deleting first node
 Node* deletefirst(Node *head)
 {
     Node*ptr=head;
     head=head->next;
     free(ptr);
     return head;
 }

 //case 2 :deleting an element at given index
 Node *deleteatindex(Node *head,int index)
 { Node*p=head;
   Node*q=head->next;
   for(int i=0;i<index-1;i++)
   { p=p->next;
     q=q->next;

   }
   p->next=q->next;
   free(q);
   return head;

 }

 //deleting the laat element
 Node* deleteatend(Node *head)
 {
     Node*p=head;
   Node*q=head->next;
   while(q->next!=NULL)
   { p=p->next;
     q=q->next;

   }
   p->next=q->next;
   free (q);
   return head;
 }

 //delete a node with given value
  Node *deleteatvalue(Node *head,int value)
 { Node*p=head;
   Node*q=head->next;
   while (q->data!=value && q->next!=NULL)
   
   { p=p->next;
     q=q->next;

   }
   if(q->data==value)
   {p->next=q->next;
   free(q);
   }
   return head;

 }

 int main()
 {     //declaring 3 nodes in heap
     Node*head=NULL;
     Node*second=NULL;
     Node*third=NULL;
     Node *fourth=new Node();

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
      third->next =fourth;

      fourth->data=44;
      fourth->next=NULL;
     while(1)

     {
         cout << "1.delete the 1st node in linked list" << endl;

         cout << "2.show the created linked list" << endl;

         cout<<"3.delete at given index.\n";

          cout<<"4.delete at given end.\n";

           cout<<"5.delete at given value\n";

         cout<<"6.exit\n";

         cout << "choose what you want to do" << endl;
         int n;
         cin >> n;
         switch (n)
         {
         case 1:
             head = deletefirst(head);
             break;
         case 2:
             printlist(head);
             break;

         case 3:
             int index;
             cout<<"enter the index\n";
              cin>>index;
            head=deleteatindex(head,index);
            break;

         case 4:
             head=deleteatend(head);
              break;

         case 5:

         int value;
             cout<<"enter the value\n";
              cin>>value;
            head=deleteatvalue(head,value);
            break;

            

         case 6:
            exit(0);

         }
     }

      return 0;



 }