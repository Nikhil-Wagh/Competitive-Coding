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
map <int,int> mp;
int main()
{
    int i,j,n,m,ans=0,a[300009]={0},b,d=0,sum=0,win;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        mp[i]++;
    }
    map <int , int> :: iterator l,r,t;
    while(m--)
    {
        cin>>i>>j>>win;
        i--;j--;win--;
        l=mp.lower_bound(i);
        r=mp.lower_bound(j);
        if(r->first!=j)
            r--;
        while(l!=r)
        {
            if(l->first==win)
            {
                l++;
            }
            else
            {
                a[l->first]=win;
                mp.erase(l);
            }
        }
        for(t=mp.begin();t!=mp.end();t++)
            cout<<t->first<<" ";cout<<endl;
    }
    return 0;
}

