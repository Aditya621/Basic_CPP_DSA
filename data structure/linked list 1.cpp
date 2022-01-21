#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*struct node
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
searchNode(2);
insertAfterNode(2);
display();
}*/
struct node
{
    int data;
    struct node* link;
};

struct node* head=NULL;
void insert_data_at_begin()
{
    int d;
    cout<<"\n ENTER THE DATA HERE ";
    cin>>d;
    struct node* temp;
    temp=new node;
    temp->data=d; temp->link=NULL;

    if (head==NULL)
        head=temp;
    else
    {
         temp->link=head;
          head= temp;
    }
    cout<<" NODE INSERTED AT BEGIN------------->>>>>"<<endl;
}

void display()
{
if(head==NULL)
    {
    cout<<"List is empty"<<endl;
    }
    else
    {
    struct node *s= head;
    cout<<"List contains--->"<<endl;
    while(s!=NULL)
        {
        cout<<s->data<<"\t";
        s=s->link;
        }
        cout<<endl;
    }
}


node* Searchnode( int item)
{

    if(head==NULL)
        {
            cout<<"LIST IS EMPTY :"<<endl;
            return NULL
        ;}
    else
    {
        struct node*p=head;
        while(p!=NULL)
        {
            if(item==p->data)
            {
                cout<<"\n this item"<<item<<"is present :"<<endl;
                return p;
            }
            else
            p=p->link;
        }
        cout<<"\n NOT FOUND :";
        return NULL;
    }
    cout<<"node inserted after "<<item<<endl;
}

void insert_data_at_last()
{
    struct node*temp; struct node*t;
    temp=new node;int d;
    cout<<"\ ENTER THE DATA HERE :";
    cin>>d;
    temp->data=d; temp->link=NULL;

    if (head==NULL)
        head=temp;
    else
    {
        t=head;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
    cout<<" NODE INSERTED AT LAST------------->>>>>"<<endl;
}


void after_node(int item)
{
    node*p = Searchnode(item);
     if(p==NULL)
            cout<<"NULL";
     else
     {
        struct node*temp;
        temp=new node;int d;
        cout<<"\ ENTER THE DATA HERE :";
        cin>>d;
        temp->data=d; temp->link=NULL;

        temp->link=p->link;
        p->link=temp;

     }
}
void deletenode()
{
    struct node *p=head;
    if(head==NULL)
        cout<<"List is empty :";
    else if(head->link==NULL)
    {
        head=NULL;
        delete p;
    }
    else
    {
        struct node *temp,*p;                                                                              //p=last
        p=head; temp=head;
        while(p->link!=NULL)
        {
            temp=p;
            p=p->link;
        }
        temp->link=NULL;
        cout<<"delete from the list "<<p->data<<endl;                                                         //temp=second last node
        delete p;
    }
}
 node  *maxnode()
{

    node *t=head,*Max=head;
    while(t!=NULL)
    {
        if(t->data>Max->data)
        {
            Max=t;
        }
        t=t->link;
    }
    return Max;

}
void delany(int item)
{
    node *prev,*temp=head;
    if(head==head)
    {
        cout<<"empty"<<endl;
        return;
    }
    if(head->data==item)
    {
        head=head->link;
        cout<<endl<<head->data<<"is deleted";
        return;
    }
    while(temp!=NULL)
    {
        if(temp->data==item)
        {
            prev->link=temp->link;
            cout<<endl<<temp->data<<" is deleted ";
            delete temp;
            return;
        }
        else
        {
            prev=temp;
            temp=temp->link;
        }
    }
    cout<<"\n element not found in the list : ";
}
void reverseList()
{
    node *prev,*link,*cur;
    prev=NULL;link=NULL;cur=head;
    while(cur!=NULL)
    {
        link=cur->link;
        cur->link=prev;
        prev=cur;
        cur=link;
    }
}

void printreverse(node *p)
{
    if (head==NULL)
        return;
    else
    {
        printreverse(p->link);
        cout<<p->data;
    }
}
 bool insert_at_secondlast(int d)
{
    struct node * p=new node;
    p->data=d; p->link=NULL;
    struct node*t=head;

    if(head==NULL)
    {
        cout<<"LIst is empty :"<<endl;
        return false;
    }
    if(head->link==NULL)
    {
        head->link=p;
    }

    else
    {
        struct node *prev=head;                  //NAME        == ADITYA SINGH
        //t=head;
        while(t->link!=NULL)                    // REG. NUMBER ==11906040
        {
            prev=t;                            // ROLL NO.     == 39
            t=t->link;
        }
        prev->link=p;
        p->link=t;

cout<<"Node : "<<p->data<<" inserted at second last  "<<endl;
    }
    return true;

}
void print_middel()
{
    struct node *prev_ptr=head;
    struct node *next_ptr=head;

    if(head!=NULL)
    {
        while(next_ptr!=NULL && next_ptr->link!=NULL)
        {
            next_ptr=next_ptr->link->link;
            prev_ptr=prev_ptr->link;
        }
        cout<<"--------------------------------------------------->>>>>>>>>>"<<endl;
        cout<<"The Middel Element is "<<prev_ptr->data<<endl;
        cout<<"--------------------------------------------------->>>>>>>>>>"<<endl;
    }
}
void count_node()
{
    int Count=0;
    struct node * p=head;
    while (p!=NULL)
           {
                Count++;
               p=p->link;
           }
    cout<<"--------------------------------------------------->>>>>>>>>>"<<endl;
    cout<<"count node = "<<Count<<endl;
    cout<<"--------------------------------------------------->>>>>>>>>>"<<endl;
}

void Middelnode()
{
  struct node *prev=head;
  struct node *temp=head;

  while(prev!=NULL && prev->link!=NULL)
  {
      temp=temp->link;
      prev=prev->link->link;
  }
  cout<<"--------------------------------------------------->>>>>>>>>>"<<endl;
  cout<<"middel element  tis "<< temp->data<<endl;
  cout<<"--------------------------------------------------->>>>>>>>>>"<<endl;

}

int main()
{
    int n,ch,it;
   {
    cout<<"\n enter the number you wants to insert data at begin in this link list";
    cin>>n;
    for(int i=0;i<n;i++)
        {
        insert_data_at_begin();
        }
}
{
           /*cout<<"\n enter the number you wants to insert data at last in this link list";
            cin>>n;
             for(int i=0;i<n;i++)
                {
                    insert_data_at_last();
                }*/
}
{
   /* cout <<"enter the data for searching ";
    cin>>ch;
    Searchnode(ch);*/
}
{
    /*cout <<"enter the data for inserting after: ";
    cin>>it;
    after_node(it);*/
}
//deletenode();
insert_at_secondlast(22);
print_middel();
count_node();
Middelnode();
    display();
}

