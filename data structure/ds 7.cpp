#include<bits/stdc++.h>
using namespace std;
int Rotate(int arr[],int start,int end)
{
       while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
}
void rotatearr(int arr[],int k,int n)
{
    Rotate(arr,0,n-1);
    Rotate(arr,0,k-1);
    Rotate(arr,k,n-1);
}
int printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    rotatearr(arr,k,n);
    printarr(arr,n);
}
