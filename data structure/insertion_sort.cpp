#include<iostream>
using namespace std;
void insert_sort(int arr[],int n)
{
    for(int k=1;k<n;k++)
    {
    int temp=arr[k]; int ptr=k-1;
    while(temp<arr[ptr] && ptr>=0)
    {
        cout<<"shifting "<<arr[ptr]<<" to place of "<<arr[ptr+1]<<endl;
        arr[ptr+1]=arr[ptr];
        ptr--;
        cout<<"current position of array----->";
        for(int s=0;s<n;s++)
        cout<<arr[s]<<"\t";
        cout<<endl;
    }
    arr[ptr+1]=temp;
    }

}

int main()
{
    int n;
    int arr[10];
    cout<<"enter the number:";
    cin>>n;
    cout<<"enter the element : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    insert_sort(arr,n);
        cout<<"\n after sorting"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
