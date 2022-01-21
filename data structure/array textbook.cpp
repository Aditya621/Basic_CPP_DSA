
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int choice;
    int num[5];

    for(int i=0;i<5;i++)
    {
        cin>>num[i];

    }
    for(int i=0;i<5;i++)
    {
    if(num[i]%2==0)
    {
    cout<<"\n num ["<<i<<"]"<<"\t=\t"<<num[i];
    }
  }
}*/
  /* double sum(int a[],int n)
    {
        double total=0.0;

        for(int i=0;i<n;i++)
       total=total+a[i];
        double mn=total/n;
        return (mn);
    }
int main()
{
    int n;
    int a[10];

cout<<"\n enter number of marks: ";
cin>>n;

    cout<<"\n enter the number of student marks in array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    double res=sum(a,n);
    if(res>=80)
    cout<< "mean = "<<res<<endl;
    else
        cout<<"SORRY YOUR MARKS ARE NOT ABOVE 80% ,,...."<<endl;
    return 0;

}
int main()
{
    int a[10],b[10];
    int n;
    cout<<"\n enter the number :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2)
        {
            cout<<a[i];
        }
    }
    /*for(int i=0;i<n;i++)
    {
        double var;
        var=var*b[i];
    cout<<var;
    }
}
int main()
{

    int a[10],b[10];
    int n,countp=0,countn=0,countz=0;
    cout<<"how many number you enter in this list : :";
    cin>>n;
    cout<<"\n enter  a list of number ::"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            countp++;
            b[i]=a[i];

        }
        else if(a[i]<0)
            {
            countn++;
            b[i]=a[i];
            cout<<"b["<<i<<"]"<<b[i]<<" " ;
        }
        else if(a[i]==0)
            {
            countz++;
            b[i]=a[i];
            cout<<"b["<<i<<"]"<<b[i]<<" " ;
        }
    }
    cout<<"number of +VE term in this list are : "<<countp<<endl;
     cout<<"number of -VE term in this list are : "<<countn<<endl;
      cout<<"number of ZERO term in this list are : "<<countz<<endl;
      return 0;
}
int main()
{
    int a[30];
    int i,j,k,n;

    cout<<"\n how many number you enter :";
    cin>>n;
    cout<<"\n element are :";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;++k)

                    a[k]=a[k+1];
                    --n;

            }
            else
               ++j;
        }
        cout<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<"  ";
    return 0;
}*/
int main()
{
    int a[30];
    int i,n,large1=0,index=0;
    cout<<"\n how many number you enter in this array :::: ";
    cin>>n;
    cout<<"\n enter the element in array :: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int large=a[0];
    int small=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>large){
            large=a[i];
            large1=i;
           }
         if(a[i]<small){
            small=a[i];
            index=i;
            }
    }
    cout<<"largest number in this array is =  "<<"a["<<large1<<"]\t=\t"<<large<<" "<<endl;
    cout<<"smallest number in this array is =  "<<"a["<<index<<"]\t=\t"<<small<<endl;


}

