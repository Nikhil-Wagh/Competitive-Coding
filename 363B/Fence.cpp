#include<bits/stdc++.h>
using namespace std;
vector<int>vi;
vector<int>av[100005];
list<int>li[100005];
queue<int>q[100005];
int main()
{
    int i,n,m=INT_MAX,k,sum=0,j=0,x;
    cin>>n>>k;
    vi.push_back(0);
    for(i=1;i<=n;i++)
    {
        cin>>x;
        vi.push_back(*(vi.begin()+i-1)+x);
        if(i>=k)
        {
            sum=vi[i]-vi[i-k];
            if(sum<m)
            {
                m=sum;
                j=i-k;
            }
        }
    }
    cout<<j+1<<endl;
    return 0;
}
