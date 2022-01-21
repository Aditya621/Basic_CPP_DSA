
#include<iostream>

using namespace std;
 linear(int a[],int n,int item,int loc)
 {
     for(int i=0;i<n;i++)
     {
         if(a[i]==item)
            cout<<item<<" item is found";
            else
                cout<<"item is not there:";
                cout<<loc;

     }


 }
 int main()
 {int n;
 int item;
 int loc;
     int a[n];
     cout<<"enter the number :";
     cin>>n;
     cout<<"enter the element :";
     for(int i=0;i<n;i++)
     cin>>a[i];
     cout<<"enter the element you wants to search:";
     cin>>item;

     linear(a,n,item,loc);

     return 0;
 }
