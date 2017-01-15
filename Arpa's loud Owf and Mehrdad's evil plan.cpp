#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef long double ld;
#define maxx 10000000000
typedef vector<LL> v1;
typedef vector<v1> v2;
typedef pair<LL,LL> ii;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define total(c) allocator(all(c),ll(0))
//typedef pair<int,int> ii;
typedef pair<ii,int> pii;
LL ma=-1,mi=1000000000000000;
inline LL gcd(LL a, LL b) {return b?gcd(b, a%b):a;}
inline LL lcm(LL a, LL b, LL MOD) {return a/gcd(a,b) * b % MOD;}
LL power(LL x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}
LL visited[200],a[200];
void bfs(LL i,LL pi, LL l)
{
    visited[i]=1;
    l++;
    if(i==pi)
    {
        ma=-1;return;
    }
    //cout<<"i "<<i<<" pi"<<pi<<endl;
    if(visited[a[i]]&&a[i]!=pi)
    {
        ma=max(ma,l);return ;
    }
    if(visited[a[i]]==0)
    bfs(a[i],i,l);
    return;
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,j,k,flag,n,m,c=0,d=0,e[30]={0},x=0,t,temp=0,count;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]--;
    }
    for(i=0;i<n;i++)
    {
        if(visited[i]==0)
            bfs(i,-1,0);
    }
    cout<<ma<<endl;


}

