#include<iostream>
using namespace std;
int main()
/*{
    int n;
    cin>>n;
int a[n]={1,2,3,4};

for(int i=0;i<n;i++)
{
    cout<<a[i];
}

}
{

    int LA[50];
    int n,k,item;
    cout<<"enter number:";
    cin>>n;
    cout<<"enter the array element ::";
    for(int i=0;i<n;i++)
        cin>>LA[i];
    cout<<"enter the position:";
    cin>>k;
    cout<<"enter item";
    cin>>item;
    int j=n-1;
    while(j>=k)
    {
        LA[j+1]=LA[j];
        j--;
    }
        LA[k]=item;
        n=n+1;
    for(int i=0;i<n;i++)
    cout<<LA[i]<<"  ";
}*/


    {

    int LA[50];
    int n,k,item;
    cout<<"enter number:";
    cin>>n;
    cout<<"enter the array element ::";
    for(int i=0;i<n;i++)
        cin>>LA[i];
    cout<<"enter the position you wants to delete :";
    cin>>k;
    k--;
    for(int j=k;k<n-2;j++)
    {
        LA[j]=LA[j+1];
    }
       item =LA[k];
       n=n-1;
    for(int i=0;i<n;i++)
    cout<<LA[i]<<"  ";

}

