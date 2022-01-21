#include<iostream>
using namespace std;
 /*struct node
 {
     int data;
     struct node*next;
 };
 struct node* start;

 void insertBegin()
 {
     int d;
     cout<<"enter the data from the node";
     cin>>d;
     struct node *t=new node;
     t->data=d;  t->next=NULL;

     if(start==NULL)
     {
         start=t;
     }
     else
     {
         t->next=start;
         start=t;
     }
cout<<"node inserted at begin"<<endl;
 }
  void insertlast()
 {
     int d;
     cout<<"enter the data from the node";
     cin>>d;
     struct node*t=new node;
     t->data=d;  t->next=NULL;
     if(start==NULL)
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
         p->next=t;
     }
     cout<<"node inserted at last"<<endl;
 }



void display()
{
    if(start==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        struct node *p=start;
        cout<<"list contain----->"<<endl;
        while(p!=NULL)
        {
            cout<<p->data<<"\t";
            p=p->next;
        }
        cout<<endl;
    }

}

    int countNode()
    {
        int Count,c;
        if(start==NULL)
        {cout<<"list is empty"<<endl;
        return (-1);}

       else{
        struct node *l=start;
        while(l!=NULL)
            {
            c=Count++;
            l=l->next;
            }
        return (c);
       }
    }


 int main()
 {
     insertBegin();
     insertBegin();
     insertBegin();
     display();
     countNode();
     return 0;
 }*/

 struct node
 {
     int data;
     struct node*link;
 };
 struct node*start=NULL;

 void insert_last()
 {
    struct node *temp;
     struct node *t;int d;
     cout<<"\n enter the data in node : ";
     cin>>d;
     temp=new node;
     temp->data=d;
     temp->link=NULL;
     if(start==NULL)
        start=temp;
    else
    {
        t=start;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
    cout<<" node inserted  : "<<endl;
 }
 void insert_begin()
 {
     struct node*p=new node;
     struct node *t;int d;
      cout<<"\n enter the data in node : ";
     cin>>d;
     p->data=d;
     p->link=NULL;

     if(p==NULL)
        start=p;
     else
     {
        p->link=start ;
        start=p;
     }
      cout<<" node inserted at begin : "<<endl;
 }
    void deletenode_begin()
    {
        struct node*r;
        if(start==NULL)
            cout<<"list is empty :";
        else
        {
            r=start;
            start=start->link;
        cout<<" delete at begin "<<r->data<<endl;
            delete (r);
        }
    }
void view_node()
{
    struct node* t;

    if (start==NULL)
        cout<<"\n list is empty : ";
    else
    {
        t=start;
        cout<<"\n LIST CONTAIN------->>>"<<endl;
        while(t!=NULL)
        {
            cout<<t->data<<"\t";
            t=t->link;
        }
    }
}



 int main()
 {
 insert_begin();
 insert_begin();
 insert_begin();

     insert_begin();
     deletenode_begin();
     view_node();
     return 0;
 }

