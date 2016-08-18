#include<bits/stdc++.h>
using namespace std;
vector <long long int > v;
int main()
{
    long long int i,j ,m=INT_MAX,a[200009],sum,di=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(m>a[i])
            m=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
           v.push_back(i);
        }
    }
    v.push_back(v[0]+n);
   // vector <int> ::iterator it;
    for(int it=0;it!=(v.size()-1);it++)
    {
        if(v[it+1]-v[it]>di)
            di=(v[it+1]-v[it]);
    }
    di--;
    cout<<(m*n+di);
    v.empty();
}
