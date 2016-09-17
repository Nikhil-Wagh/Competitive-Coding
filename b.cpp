#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef long double ld;
#define maxx 10000000000
typedef vector<int> v1;
typedef vector<v1> v2;
typedef pair<int,int> ii;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define total(c) allocator(all(c),ll(0))
typedef pair<int,int> ii;
typedef pair<ii,int> pii;
LL ma=-1,mi=1000000000000000;
inline LL gcd(LL a, LL b) {return b?gcd(b, a%b):a;}
inline LL lcm(LL a, LL b, LL MOD) {return a/gcd(a,b) * b % MOD;}
LL w;
LL y;
LL cnt;
list < pair <LL,LL> > li[310];
void dfs(LL x,LL * visited,LL * check)
{
    visited[x]=1;
    if(x==y)
    {
        check[w]++;
        cnt++;
        return;
    }
    for(list <pair <LL,LL> > :: iterator it= li[x].begin();it!=li[x].end();it++)
    {
        if(visited[it->first]==0&&it->second==w&&check[w]==0)
        {
            dfs(it->first,visited,check);
        }
    }
}
int main()
{
    LL i,j,n,ans=0,a[100009]={0},b,d=0,sum=0,x,m;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        //x--;y--;
        li[x].pb({y,w});
        li[y].pb({x,w});
    }
    LL q;
    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        //x--;y--;
        cnt=0;
        LL check[310]={0};
        for(list <pair <LL,LL> > :: iterator it= li[x].begin();it!=li[x].end();it++)
        {
            LL visited[310]={0};
            w=it->second;
            visited[x]=1;
            //cout<<it->first<<" "<<w<<endl;
            if(check[it->second]==0)
            dfs(it->first,visited,check);
        }
        cout<<cnt<<endl;
    }
    return 0;
}



/*

6 10
1 2 1
1 2 2
1 3 2
1 3 3
2 4 2
2 4 3
2 5 1
2 5 3
3 6 2
3 6 3



11 22
1 2 1
1 2 3
1 3 2
1 6 2
2 5 4
2 5 1
2 4 2
4 7 1
4 7 3
4 3 2
3 6 1
3 10 1
3 10 3
6 8 1
6 11 2
6 11 3
8 9 1
8 9 3
8 10 2
10 9 2
10 9 4
9 11 1


*/
