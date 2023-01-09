#include <iostream>
using namespace std;

class Node
{ public:
    char name[30],branch[30],sec[10];
    int phone,sem;
    Node *next;
};

Node*head=NULL;
int count=0;

Node *create()
{
    Node*snode=new Node();
    if(snode==NULL)
    {
      cout<<"memory is not available.\n";
     
    }

    cout<<"Enter the student name ,branch ,sem,sec and phone number\n";
    cin>>snode->name>>snode->branch>>snode->sem>>snode->sec>>snode->phone;
    snode->next=NULL;
    count++;
    return snode;

}

void display(Node *snode)
{
     Node *p=snode;
     count =1;
  if(p==NULL)
  {
      cout<<"there is no data to show\n";
  }
  cout<<"The content of SLL is\n";

 
  while(p!=NULL)
  {
      cout<<p->name<<"\n"<<p->branch<<"\n"<<p->sem<<"\n"<<p->sec<<"\n"<<p->phone<<"\n";
      p=p->next;
      count++;
 }

 cout<<"count="<<count;


}

Node *insertfront()
{
    Node *temp= new Node();
    temp=create();
    if (head==NULL)
    {
        return temp;

    }
    temp->next=head;
    return temp;

}
int main()
{   cout<<"enter the number of student\n";
   Node*s=new Node();
    int n;
    cin>>n;
   int i=1;
    while(i<=n)
    {
     s= create();
     i++;
    }
    display(s);

}