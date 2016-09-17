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
list <LL> li[1000009];
vector <LL> a,b,t;
map <LL,LL> mp;
void dfs1(int i)
{
    if(i==0)
        return;
    a.push_back(i);
    for(list <LL> :: iterator it = li[i].begin();it!=li[i].end();it++)
    {
        dfs1(*it);
    }
}
void dfs2(int i)
{
    if(i==0)
        return;
    b.push_back(i);
    for(list <LL> :: iterator it = li[i].begin();it!=li[i].end();it++)
    {
        dfs2(*it);
    }
}
int main()
{
    LL i,j,n,ans=0,d=0,sum=0,x,y;
    clock_t tStart = clock();
    /* Do your stuff here */
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x==0)
        {
            d=y;
        }
        li[x].push_back(y);
        mp[y]++;
        t.push_back(x);
    }cout<<"D "<<d<<endl;
    map <LL,LL> :: iterator it;
    for(i=0;i<t.size();i++)
    {
        it=mp.find(t[i]);
        if(it==mp.end())
        {
            ans=it->first;
            break;
        }
    }cout<<"ans "<<ans<<endl;
    dfs2(d);
    dfs1(ans);
    for(i=0;i<a.size()&&i<b.size();i++)
    cout<<a[i]<<" "<<b[i]<<" ";
    if(i<a.size())
        cout<<a[i]<<endl;
    return 0;
}


/*

7
16 25
4 9
7 5
0 16
25 2
2 0
5 4

*/


