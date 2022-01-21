#include <iostream>
using namespace std;

struct node
{
int data;
struct node* next;
};

struct node* start;
void create()
{
start=NULL;
}

void insertBegin()
{
int d; cout<<"enter the data for node"<<endl;  cin>>d;

struct node *t= new node;
t->data= d;  t->next= NULL;

if(start==NULL)
    {
     start=t;
    }
else
    {
    t->next=start;
    start= t;
    }
cout<<"node inserted at begin"<<endl;
}

void display()
{
if(start==NULL)
    {
    cout<<"List is empty"<<endl;
    }
    else
    {
    struct node *p= start;
    cout<<"List contains--->";
    while(p!=NULL)
        {
        cout<<p->data<<"\t";
        p=p->next;
        }
        cout<<endl;
    }
}

node* searchNode(int item)
{
//int item; cout<<"enter node data to be searched"<<endl;  cin>>item;
    if(start==NULL)
    {
    cout<<"List is empty"<<endl; return NULL;
    }
    else
    {
    struct node*p=start;
    while(p!=NULL)
    {
    if(item==p->data)
        {
        cout<<"search completed"<<endl;return p;
        }
    else
        {
        p=p->next;
        }
    }
    cout<<"not found"<<endl;return NULL;
    }

}



void insertLast()
{
int d; cout<<"enter data for node"<<endl;  cin>>d;

struct node *t= new node;
t->data=d;    t->next=NULL;
    if(start== NULL)
    {
    start=t;
    }
    else
    {
    struct node*p=start;
    while(p->next!=NULL)
    {
    p=p->next;
    }
    p->next= t;

    }
    cout<<"node inserted at last"<<endl;
}

void insertAfterNode(int item)
{
    node *p=searchNode(item);

  if(p==NULL)
  {
  cout<<" no node exists having item"<<endl; return;
  }
  else
  {
        int d; cout<<" enter contents of new node"<<endl; cin>>d;
        struct node *t= new node;
        t->data=d;  t->next=NULL;

        t->next= p->next;
        p->next=t;
  }
    cout<<"node inserted after "<<item<<endl;
}
//task1
node* maxNode()
{
    //data value node having maximum value if list is empty return NULL

}
//task2
int countNodes()
{
//0--  if list is empty
//number of nodes in list

}

void delBegin()
{
if(start==NULL)
{
cout<<"List is empty"<<endl;
}
else
{
struct node *t=start;
cout<<t->data<<" deleted"<<endl;
start=start->next;
delete t;

}
}

void delLast()
{
if(start==NULL)
{
cout<<"List is empty"<<endl;
}
else if( start->next==NULL)
{
    struct node *p=start;
    start=NULL;
    delete p;
}
else
{
    struct node *temp,*p;
    p=start; temp=start;
    while(p->next!=NULL)
    {
        temp=p;
        p=p->next;
    }
    temp->next=NULL;
    cout<<"deleted from list "<<p->data<<endl;
    delete p;
}
}

int main()
{
create();
insertBegin();
insertLast();
insertBegin();
insertBegin();
display();
delBegin();
delLast();
display();
}
