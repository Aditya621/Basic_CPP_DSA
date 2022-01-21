#include<iostream>
using namespace std;
sort (arr,arr+n)
int main()
{
    int arr[3];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}
