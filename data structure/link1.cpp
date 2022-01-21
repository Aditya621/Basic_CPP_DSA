#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*link;
};
struct node*start=NULL;


 void creatnode()
 {
     struct node*t,*temp;
     int d;
     t=new node;
     cout<<"\n enter the data :";
     cin>>d;
     t->data=d;
     t->link=NULL;
     if(start==NULL)
     {
         start=temp;
     }
     else
     {
         t=start;
         while(t->link!=NULL)
            t=t->link;
         t->link=temp;
         /*t->link=start;
         t=start;*/
     }
 }
void viewlist()
{
    struct node*t;
    if(start==NULL)
    cout<<"\n list is empty:";
    else
    {
        t=start;
        while(t!=NULL)
        {
            cout<<t->data;
            t=t->link;
        }

    }
}

 int main()
 {
     creatnode();
     creatnode();
     creatnode();
     creatnode();
     viewlist();
 }
