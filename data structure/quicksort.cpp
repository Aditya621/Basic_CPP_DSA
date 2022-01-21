#include<iostream>
using namespace std;

void Quick_sort(int arr[],int Findex, int Lindex)
{
    int pivot,i,j,temp;
    if(Findex<Lindex)
    {
        pivot=Findex;
        i=Findex;
        j=Lindex;
        while(i<j){
        while(arr[i]<=arr[pivot] && i<Lindex)
            i++;
        while(arr[j]>arr[pivot])
            j++;
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=temp;
    Quick_sort(arr,Findex,j-1);
    Quick_sort(arr,j+1,Lindex);
    }
}

int main()
{
   int arr[]={1,5,2,5,7,8,5,3,2};
   int n=sizeof(arr)/sizeof(arr[0]);

   Quick_sort(arr,0,n-1);
   cout<<"\n Sorted Array is : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
   return 0;

}


