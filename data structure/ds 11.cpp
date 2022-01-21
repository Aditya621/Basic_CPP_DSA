#include<bits/stdc++.h>
using namespace std;
void Splitarr(int arr[],int k,int n)
{
    for(int i=0;i<k;i++)
    {
    int x=arr[0];
    for(int j=0;j<n-1;++j)
        arr[j]=arr[j+1];
        arr[n-1]=x;
    }
}
int main()
{
    int arr[]={12, 10, 5, 6, 52, 36 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int position=2;
    Splitarr(arr,position,6);
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";

}
