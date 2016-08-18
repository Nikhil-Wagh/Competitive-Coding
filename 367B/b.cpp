#include<bits/stdc++.h>
using namespace std;
vector <int> a;
bool cmp(int x,int y)
{
    return x<y;
}
int main()
{
    int i,n,q,x,j;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
    sort(a.begin(),a.begin()+n);
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x;
        j=upper_bound(a.begin(),a.begin()+n,x)-a.begin();
        cout<<j<<endl;
    }
    return 0;
}
