#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0,temp;
    double ans;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
    }
    cout<<ceil(abs(sum)/x);
}
