#include <iostream>
using namespace std;

struct node
{
int data;
struct node* next,*prev;
};
struct node* head,*last;
//**********************************INSERTION METHOD*******************************
void insertBegin(int d)
{
struct node *t= new node;
t->data=d;t->prev=NULL;
if (head==NULL)
    {
    head=t; last=t;  t->next=NULL;
    }
else
    {
       t->next= head;
       head->prev=t;
       head=t;
    }

cout<<" Node inserted at begin in Doubly linked list"<<endl;
}

void  display()
{
if(head==NULL)
{
cout<<"List is empty"<<endl; return;
}
else
    {
    node *p= head;
    cout<<" List contains  --->  ";
    while(p!=NULL)
        {
        cout<<p->data<<"\t";
        p=p->next;
        }

cout<<endl;
    }
}

void insertLast(int d)
{
struct node *t= new node;
t->data=d; t->next=NULL;
    if(head==nullptr)
    {
    head=t; last=t;
    }
    else
        {
        node *p= head;
        while(p->next!=nullptr){p=p->next;}
            t->prev=p;
            p->next=t;
            last=t;
        }
    cout<<"Node inserted at last in doubly linked list"<<endl;
}

insert_inbetween (int d,int p)
{
    struct node *temp;
    struct node *new_node=new node;
    new_node->data=d;
    temp=head;
    for (int i=0;i<p-1;i++)
        temp=temp->next;
    new_node->next=temp->next; new_node->next->prev=new_node;
    new_node->prev=temp;          temp->next=new_node;
    cout<<"node is inserted at "<<p<<" position and value is "<<new_node->data<<endl;


}

//******************************DELETION METHOD******************************************

Delete_begin()
{
    struct node *temp;
    temp=head;
    head=head->next; temp->next=NULL; head->prev=NULL;
    delete temp;
    cout<<"DELETE NODE IN THE BEGINING : "<<endl;
}

Delete_last()
{
    struct node *temp;
    temp=last;
    last= last->prev; temp->prev=NULL;  last->next=NULL;
    cout<<"DELETION IS DONEAT LAST I.E TAIL: "<<endl;
}

Delete_inbetween(int pos)

{
    struct node *temp;
    temp=head;
    for (int i=0;i<pos-1;i++)
       temp=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
}

int main()
{
insertBegin(20);
insertLast(23);
insertBegin(21);
insertLast(24);
insertBegin(26);
insertLast(27);
insert_inbetween (100,5);
display();
Delete_begin();
Delete_last();
Delete_inbetween(2);
display();
}


