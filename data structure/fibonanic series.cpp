#include<bits/stdc++.h>
using namespace std;
class name
{
public:
    int fib(int n)
    {
        int f[n+2];
        int i;
         f[0]=0;
         f[1]=1;
        for(int i=2;i<=n;i++)

        {
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
    }
};
int main()
{
    name g;
    int n;
    cout<<"\n enter the number : ";
    cin>>n;
    cout<<g.fib(n);
    return 0;

}
