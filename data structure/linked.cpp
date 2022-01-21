#include<iostream>
using namespace std;

struct node
{
    int info;
    struct node*link;
};
struct  node *start=NULL;

 void insertdata()
 {
     struct node *temp;struct node *t;
     int d;
     temp= new node;
     cout<<"\n enter the data : ";
     cin>>d;
     temp->info=d;
     temp->link=NULL;

     if(start==NULL)
        start=temp;
     else
     {
         t=start;
         while(t->link!=NULL)
            t=t->link;
         t->link=temp;
     }
 }

 void deletenode()
 {
     struct node*r;
     if(start==NULL)
        cout<<"\n list is empty :";
     else
     {
         r=start;
         start=start->link;
         delete(r);
     }
 }

 void viewlist()
 {
     struct node*t;
    if(start==NULL)
        cout<<"\n list is empty :";
      else
      {
          t=start;
          while(t!=NULL)
          {
              cout<<t->info;
              t=t->link;
          }
      }
 }
 /*int menu()
 {
     int ch;
     cout<<"\n 1. Add Value ";
     cout<<"\n 2. Delete first value";
     cout<<"\n 3. View";
     cout<<"\n 4. exit ";
     cout<<"\n 5. enter your choice : ";
     cin>>ch;
     return (ch);
 }
 int main()
 {
     while(1)
     {
         switch(menu())
         {
             case1:
                insertdata();
                 break;
                 case2:
                     deletenode();
                     break;
                     case3:
                         viewlist();
                         break;
                         case4:
                             exit(0);

         }
     }
 }*/
 int main()
 {
     insertdata();
     insertdata();insertdata();insertdata();
     /deletenode();
     viewlist();

 }
