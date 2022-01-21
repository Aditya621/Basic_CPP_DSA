#include<bits/stdc++.h>
using namespace std;
int Count(int arr[],int n)
{
    int Min=arr[0],index_min;
    for(int i=0;i<n;i++)
    {
        if(Min>arr[i])
        {
            Min=arr[i];
            index_min=i;
        }
    }
    return index_min;
}
int main()
{
    int arr[]={7,9,11,12,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"\n rotation is counted... "<<Count(arr,n)<<" ...times ";
}
