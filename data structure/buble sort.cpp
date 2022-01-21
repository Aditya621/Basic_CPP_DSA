//**********************using while loop*************
#include<iostream>
using namespace std;
/*void doublesort(int arr[],int n)
{
    bool swapped;

    int i=0,j=0;
    while(i<n-1)
    {
        swapped=false;
        int j=0;
        while(j<n-i-1)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
            j++;
        }
        i++;
        if(swapped==false)
            break;
    }

}

int main()
{

    int arr[]={10,90,50,60,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    doublesort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";

}*/

//***************using for loop*********************************
void doublesort(int arr[],int n)
{
    bool swapped;

    int i,j;
    for(int i=0;i<n-1;i++)
    {
        swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }

}

int main()
{
    int n;int arr[10];
    cout<<"''enter the number of data :";
    cin>>n;
    cout<<"\n enter element :";
    for (int i=0;i<n;i++)
        cin>>arr[i];
    doublesort(arr,n);
    cout<<"\n after sorting :";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";

}

