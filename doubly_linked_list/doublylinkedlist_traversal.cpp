#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev;
    Node *next;
};

void traversalinforward(Node *N1)
{  
    Node*p=N1;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    
  

}

int main()
{ Node *N1=new Node();
  Node *N2=new Node();
  Node *N3=new Node();
  Node *N4=new Node();

  N1->prev=NULL;
  N1->data=12;
  N1->next=N2;

   N2->prev=N1;
  N2->data=15;
  N2->next=N3;
  
   N3->prev=N2;
  N3->data=18;
  N3->next=N4;
  
   N4->prev=N3;
  N4->data=100;
  N4->next=NULL;

  traversalinforward(N1);

  return 0;
}