#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef vector<long long int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
vector<int > a[1000009];
int visit[1000009];
void dfs(int x)
{
    //cout<<x<<endl;
    visit[x]=1;
    for(int i=0;i<a[x].size();i++)
        if(visit[a[x][i]]==0)
            dfs(a[x][i]);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n,sum=0,count=0,m,flag=0;
    cin>>n;
    a[1].push_back(2);
    a[3].push_back(5);
    for(int i=0;i<n;i++)
    {
        if(a[i].size()>0)
        dfs(i);
    }
    for(int i=1;i<=n;i++)
        cout<<visit[i]<<" ";
	return 0;
}
