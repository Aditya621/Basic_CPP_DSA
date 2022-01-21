#include<bits/stdc++.h>
using namespace std;
 void Rotate(vector<int> vec,int d)
{
    for(int i=0;i<d;i++)
    {
        vec.push_back(vec[0]);
        vec.erase(vec.begin());
    }
        for(int i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";

}
int main()
{
    vector<int>vec={1,2,3,4,5,6};
    int n=vec.size();
    int d=2;
    Rotate(vec,d%n);

}
