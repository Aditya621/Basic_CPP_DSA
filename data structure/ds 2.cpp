#include<iostream>
using namespace std;
int Max(int arr[],int n)
{
    int arrsum=0;
    int currvalue=0;
    for(int i=0;i<n;i++)
    {
        arrsum=arrsum+arr[i];
        currvalue=currvalue +(i*arr[i]);
    }
    int maxvalue=currvalue;
    for(int j=1;j<n;j++)
    {
        currvalue=currvalue+arrsum-n*arr[n-j];
        if(currvalue>maxvalue)
            maxvalue=currvalue;
    }
    return maxvalue;
}
int main()
{
    int arr[]={1,20,2,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"\n Max Sum Is = "<<Max(arr,n);
}
