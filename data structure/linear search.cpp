
#include<iostream>

using namespace std;
 linear(int a[],int n,int item,int loc)
 {
     for(int i=0;i<n;i++)
     {
         if(a[i]==item)
            {cout<<item<<" item is found";
            return (i);}
            else
                cout<<"item is not there:";


     }


 }
 int main()
 {
     int a[6];
     int item,loc;
     cout<<"enter the  6 element :";
     for(int i=0;i<6;i++)
     cin>>a[i];
     cout<<"enter the element you wants to search:";
     cin>>item;

     linear(a,6,item,loc);

     return 0;
 }
