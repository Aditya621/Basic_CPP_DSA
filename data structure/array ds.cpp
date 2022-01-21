// C++ code for program
// to cyclically rotate
// an array by one
# include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*void rotate(int arr[], int n)
{
	int x = arr[n - 1], i;
	for (i = n - 1; i > 0; i--)
	arr[i] = arr[i - 1];
	arr[0] = x;
}

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5}, i;
	int n = sizeof(arr) /
			sizeof(arr[0]);

	cout << "Given array is \n";
	for (i = 0; i < n; i++)
		cout << arr[i];

	rotate(arr, n);

	cout << "\nRotated array is\n";
	for (i = 0; i < n; i++)
		cout << arr[i];

	return 0;
}*/

// This code is contributed by jit_t
/*void Rotate(int arr[],int n)
{
    for(int i=n-1;i>0;i--){
    int temp=arr[0];
        arr[i]=arr[i+1];
    arr[i]=temp;}
}
int main()
{
   int  arr[]={1,2,3,4,5,6,7},i;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"given array is : ";
    for(int i=0;i<n;i++)
        cout<<arr[i];
    Rotate(arr,n);
    cout<<"\n rotated array is :";
    for(int i=0;i<n;i++)
        cout<<arr[i];
}*/

/*int main()
{
string arr="aditya";
    string rev=string(arr.rbegin(),arr.rend());

        cout<<rev<<" ";

}*/

//**********REVERSE ARRAY USING LIST**************************

/*int main()
{

    list<int>li;
    li.push_back(10);
    li.push_back(20);
    li.push_back(30);
    li.push_back(40);li.push_back(50);
    for(auto i=li.begin();i!=li.end();i++)
        cout<<*i<<" ";
    li.reverse();
    cout<<"\n after reverse the arry : ";
    for(auto i=li.begin();i!=li.end();i++)
        cout<<*i<<" ";
}*/

//*******************SORT ARRAY USING SORT FUNCTION*********************
void show(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i] << "  ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    show(arr,n);
    sort(arr,arr+n);
    cout<<"\n sort array is  ";
    show(arr,n);
}
