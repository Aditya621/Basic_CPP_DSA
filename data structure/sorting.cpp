#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[10];
    cout<<"enter the number:";
    cin>>n;
    cout<<"enter the element : ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"element are before sorting ";
    for(int i=0;i<n;i++)
        cout<<a[i];
        cout<<"\n after sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
