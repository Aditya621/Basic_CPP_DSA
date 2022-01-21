#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node*link;
};

struct node *head=NULL;
void insert_data_at_begin()
{
    int d;
    cout<<"\ ENTER THE DATA HERE ";
    cin>>d;
    struct node*temp; struct node*t;
    temp=new node;
    temp->data=d; temp->link=NULL;

    if (head==NULL)
        head=temp;
    else
    {
         t->link=head;
          head= t;
    }
    cout<<" NODE INSERTED AT BEGIN------------->>>>>"<<endl;
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
    cout<<" NODE INSERTED AT LAST------------->>>>>";
}

struct node* Search_node( int item)
{
    struct node*p;
    p=new node;
    if(p==NULL)
        {cout<<"LIST IS EMPTY :";
        return NULL;}
    else
    {
        while(p!=NULL)
        {
            if(p->data==item)
                cout<<"\n this item"<<item<<"is present :";
            else
            p=p->link;
        }
        cout<<"\n NOT FOUND :";
        return NULL;
    }
    cout<<"node inserted after "<<item<<endl;
}
void after_node(int item)
{
    node*p = Search_node(item);
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


int main()
{
    insert_data_at_begin();
    insert_data_at_begin();
    insert_data_at_last();
    insert_data_at_begin();
    insert_data_at_last();
    Search_node(5);
    after_node(5);
}
