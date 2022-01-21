/*#include <iostream>
using namespace std;

struct node
{
int data;
struct node* next;
};
struct node* start;

void insertBegin(int d)
{
struct node *t= new node;
t->data=d;
if (start==NULL)
    {
    start=t; t->next=t;
    }
else
    {
    node *p=start;
    while(p->next!=start){  p=p->next;}


     p->next=t;
     t->next=start;
        start=t;
    }

cout<<" Node inserted at begin in circular linked list"<<endl;
}

void  display()
{
if(start==NULL)
{
cout<<"List is empty"<<endl; return;
}
else
    {
    node *p= start;
    cout<<" List contains  --->  ";
    do
        {
        cout<<p->data<<"\t";
        p=p->next;
        }while(p!=start);

cout<<endl;
    }
}

void insertLast(int d)
{
struct node *t= new node;
t->data=d;
    if(start==nullptr)
    {
    start=t; t->next=t;
    }
    else
        {
        node *p= start;
        while(p->next!=start){p=p->next;}
            t->next=  p->next;
            p->next=  t;

        }
    cout<<"Node inserted at last in circular linked list"<<endl;
}


void insertBeforeNode(int item,int d)
{
        struct node *t= new node;  t->data=d;

        if(start==NULL)
        {return;}
        else if(item==start->data){
            node *p=start;
            while(p->next!=start){p=p->next;}
            p->next=t;
            t->next=start;  start=t;
            return;
        }

        else
        {
        node *p=start;node *temp=start;
        do
            {
             if(p->data==item)
             {
                temp->next=t;
                t->next=p; return;
             }
             temp=p;p=p->next;

            }while(p!=start);
        }
}

void deleteFirst(){
if (start==NULL){
cout<<"Empty list";return;
}
else
    {
    node *p=start;
    while(p->next!=start)
        {
        p=p->next;
        }
if(p==start)
    {
    start=NULL;
    delete p;
    return;
    }
else
    {
    node *s=start;
    p->next=start->next;
    start=start->next;
    delete s;
    }
   }
}

void deleteLast(){
if (start==NULL){
cout<<"Empty list";return;
}
else{
node *p=start; node *temp=p;
while(p->next!=start){
temp=p;
p=p->next;
}
if(p==start){
start=NULL;return;
}
else{
temp->next=p->next;
}
}
}

int main()
{
insertLast(12);
insertBegin(20);
insertBegin(22);
insertLast(98);
insertBegin(24);
insertBeforeNode(24,15);
insertBeforeNode(15,17);
insertBeforeNode(98,14);
display();
}*/

#include <iostream>
using namespace std;

struct node
{
int data;
struct node* next,*prev;
};
struct node* start,*last;

void insertBegin(int d)
{
struct node *t= new node;
t->data=d;t->prev=NULL;
if (start==NULL)
    {
    start=t; last=t;  t->next=NULL;
    }
else
    {
       t->next= start;
       start->prev=t;
       start=t;
    }

cout<<" Node inserted at begin in Doubly linked list"<<endl;
}

void  display()
{
if(start==NULL)
{
cout<<"List is empty"<<endl; return;
}
else
    {
    node *p= start;
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
    if(start==nullptr)
    {
    start=t; last=t;
    }
    else
        {
        node *p= start;
        while(p->next!=nullptr){p=p->next;}
            t->prev=p;
            p->next=t;
            last=t;
        }
    cout<<"Node inserted at last in doubly linked list"<<endl;
}




int main()
{
insertBegin(20);
insertLast(23);
insertBegin(21);
insertLast(24);
insertBegin(26);
insertLast(27);
display();
}
