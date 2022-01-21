#include<bits/stdc++.h>
using namespace std;
int maxhamming(int arr[],int n)
{
    int brr[2*n+1];
    for(int i=0;i<n;i++)
        brr[i]=arr[i];
    for(int i=0;i<n;i++)
        brr[n+i]=arr[i];
    int maxham=0;
    for(int i=0;i<n;i++)
    {
        int curmax=0;
        for(int j=i,k=0;j<(n+i);k++,j++)
        {
            if(brr[j]!=arr[k])
                curmax++;
        }
        if(curmax==n)
            return n;
            maxham=max(maxham,curmax);
    }
    return maxham;
}
int main()
{
    int arr[]={1, 4, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<< maxhamming(arr,n);
   return 0;
}
