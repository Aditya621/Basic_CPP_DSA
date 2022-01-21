#include<bits/stdc++.h>
using namespace std;

/*int main()
{
   int n,sum=0;
   float avg;
   cout<<"\n enter number:";
   cin>>n;
   int arr[n];
   cout<<"\n enter element of array :";
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
        sum+=arr[i];
      }
      cout<<"\n sum is "<<sum;
     avg=sum/n;
     cout<<"\n average = "<<avg;
     return 0;
}*/
//******************************* EVEN ARRAY ELEMENT ****************************************

/*int main()
{
    int arr[]={21,40,5,9,4,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"\n even arrY = ";
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            cout<<arr[i]<< " ";
    }
}*/
//********************************* LINEAR SEARCH ARRAY*************************************

/*int main()
{
    int count,loc=0,n,srh;
    cout<<"\n enter the number: ";
    cin>>n;
    int a[n];
    cout<<"\n enter the element ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"\n enter the element you wants to search:";
    cin>>srh;
    for(int i=0;i<n;i++)
    {
        if(a[i]==srh)
        {
            loc=i;
            cout<<srh<<"is present at = "<<loc;
            count++;
        }
    }
    if(count!=0)
    {
        cout<<"/n /n Number "<<srh<<"is present in array "<<count<<"time ";
    }
    else
        cout<<"element is not present :";
    return 0;
}*/
//**********************************BINARY SEARCH ARRAY*****************************************

/*int main()
{
    int item,loc=-1,n;
    cout<<"\n enter the number: ";
    cin>>n;
    int a[n];
    cout<<"\n enter the element ";
    for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<"sorted element are ";
        sort(a,a+n);
        for(int i=0;i<n;i++)
            cout<<a[i]<<"   ";
    cout<<"\n enter the element you wants to search:";
    cin>>item;
    int beg =0,end = n-1,mid;
    while(beg<=end && loc==-1)
    {
        mid=(beg+end)/2;
          if(item==a[mid])
          {
                loc=mid;
                cout<<"\n item present at"<<loc<<"  index";
          }
          else if(item<a[mid])
            end=mid-1;
          else
            beg=mid+1;

    }
    if(item==-1)
        cout<<"\n element is not present in array \n PLEASE CHECK AND THEN FIND \n\n";
    return 0;
}*/
// *******************************DECIMAL INTO BINARY************************************************


/*int main()
{
    int n,i=0,j;
    cout<<"\n enter the decimal number you wants to convert :";
    cin>>n;
    int a[20];
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i=i+1;
    }
    cout<<"\n binary  number is \t";
    for(int j=i-1;j>=0;j--)
    cout<<a[j];
    return 0;
}*/
//*************************************************************************************************
/*int result(int a[],int n)
{
    double sum=0.0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    double mn=sum/n;
    return(mn);
}
int main()
{
    int n;
    double res;
    cin>>n;
    int a[n];
    cout<<"enter element";
    for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<"\n array is : ";
         for(int i=0;i<n;i++)
        cout<<a[i];
      double mean=result(a,n);
    cout<<"\n mean is = "<<mean;
    return 0;
}*/

//**********************************SORTING BY FUNCTION******************************************
//    **********************************ACENDING ORDER************************************
 /*void sort(int a[],int n)

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}
int main()
{
      int n;
    cin>>n;
    int a[n];
    cout<<"enter element";
    for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<"\n array is : ";
         for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
    sort(a,n);
    cout<<"\n sorting array = ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<"  ";
    return 0;
}*/
//***********************************DECENDING ORDER*********************************************
/*void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

}
int main()
{
      int n;
    cin>>n;
    int a[n];
    cout<<"enter element";
    for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<"\n array is : ";
         for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
    sort(a,n);
    cout<<"\n sorting array = ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<"  ";
    return 0;
}*/
//*********************************SORTING ARRAY *****************************************

/*int main()
{
      int n;
    cin>>n;
    int a[n];
    cout<<"enter element";
    for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<"\n array is : ";
         for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
    sort(a,a+n);
    cout<<"\n sorting array = ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<"  ";
    return 0;
}*/
//**************************************2D ARRAY **************************************

/*int main()
{
    int a[10][10],m,n;
    cout<<"\n enter row and column :";
    cin>>m>>n;
    cout<<"\n enter the "<<m<<"element in row and "<<n<<"element in columns :";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n  ARRAY ARE :"<<endl;

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<a[i][j]<<"\t";
        }
           cout<<endl;
    }
    return 0;
}*/
//***************************TRANSPOSE ARRAY*****************************************
/*int main()
{
    int a[10][10],b[10][10],m,n;
    cout<<"\n enter row and column :";
    cin>>m>>n;
    cout<<"\n enter the "<<m<<"   element in row and "<<n<<"   element in columns :";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          cin>>a[i][j];
        }
    }
    cout<<"\n  ARRAY  BEFORE TRANSPOSE :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n  ARRAY AFTER TRANSPOSE :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<a[j][i]<<"\t" ;
        cout<<endl;
    }

    return 0;
}*/
//***********************MULTIPLICATION OF TWO ARRAY***************************

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,q,k;
    cout<<"enter the order of A matrix"<<endl;
    cin>>m>>n;
    cout<<"enter the order of B matrix"<<endl;
    cin>>p>>q;
    if(m==q)
    {
        cout<<"enter the element of A matrix : "<<endl;//enter  a element
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"enter the element of B matrix : "<<endl;//enter  b element
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                cin>>b[i][j];
            }
        }
        cout<<" A matrix  is : "<<endl;//a matrix
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<" B matrix  is : "<<endl;//b matrix
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                cout<<b[i][j]<<"\t";
            }
            cout<<endl;
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                c[i][j]=0;
                for(int k=0;k<n;k++)
                    c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"MULTIPLICATION OF TWO ARRAY ARE : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
            cout<<c[i][j]<<"\t";
            cout<<endl;
    }
    return 0;
}
