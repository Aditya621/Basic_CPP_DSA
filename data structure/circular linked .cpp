#include <iostream>
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


     p->next=t;//this is says circular linked list
     t->next=start;
        start=t;
    }

cout<<" Node inserted at begin in circular linked list"<<endl;
}
void insert_last(int d)
{
struct node *t=new node;
t->data=d;
if(start==NULL)
{
    start=t;
    t->next=t;
}
else{

    node*p=start;
    while(p->next!=start){
        p=p->next;
    }
    t->next=p->next;//circular linked list
    p->next=t;
}
cout<<"node inserted at lst in circular linked list : "<<endl;

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
    cout<<" List contains  ---> ";
    do
        {
        cout<<p->data<<"\t";
        p=p->next;
        }while(p!=start);

cout<<endl;
    }
}
Delete_Begin()
{
    struct node *p=start;
    if (start==NULL)
        cout<<"List Is Empty : ";
    else
    while(p->next!=start)
        p=p->next;
    p->next=start->next;//circular linked list
    start=start->next;

}
Delete_last()
{

    struct node *temp=start;
    struct node *p;
    if (start ==NULL)
        cout<<"List Is Empty : ";
    else
        while(temp->next!=start)
    {
        p=temp;
        temp=temp->next;
    }
    p->next=start;
    delete temp;
}

delete_inbetween(int pos)
{
    struct node* temp;
    temp=start;
    for (int i=0;i<pos-1;i++)
        temp=temp->next;
    temp->next=temp->next->next;
}

midel()
{
    struct node *temp;
    while(temp!=NULL)
        temp=temp->next->next;
    cout<<temp->data;
}
int main()
{
    insert_last(11);
insertBegin(20);
insertBegin(22);
insert_last(90);
insert_last(110);
insert_last(330);
insert_last(440);

insertBegin(24);
Delete_Begin();
Delete_last();
delete_inbetween(1);
midel();
display();
}
