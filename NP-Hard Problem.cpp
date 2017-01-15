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
list <LL> li[100009];
LL visit[100009],a[100009],b[100009],ch=0;
bool flag=false;
//LL bfs(LL x)
//{
//    visit[x]=1;
//    queue <LL> q;
//    q.push(x);
//    LL t=0;
//    list <LL> :: iterator it;
//    while(!q.empty())
//    {
//        LL temp=q.front();
//        q.pop();
//        if(ans%2)
//            a[temp]++;
//        else
//            b[temp]++;
//        for(it=li[temp].begin();it!=li[temp].end();it++)
//        {
//            if(!visit[*it]&&*it!=temp)
//            {
//                if((a[temp]==a[*it]&&a[temp])||(b[temp]==b[*it]&&b[temp]))
//                {
//                    return -1;
//                }
//                q.push(*it);
//            }
//        }
//    }
//}
void dfs(LL x,LL p,bool val)
{
    if(li[x].size()==0)
        return;
    visit[x]=1;
    if(val)
        a[x]++;
    else
        b[x]++;
    list <LL> :: iterator it;

    for(it=li[x].begin();it!=li[x].end();it++)
    {
        if(!visit[*it])
            dfs(*it,x,!val);
        else if(p!=*it)
        {
            if(!(a[*it]^a[x])||!(b[*it]^b[x]))
                flag=true;
        }
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,j,k,n,m,c=0,d=0,e[30]={0},t,temp=0,count;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>c>>d;
        li[c].pb(d);
        li[d].pb(c);
    }
    for(i=1;i<=n;i++)
    {
        if(!visit[i])
            dfs(i,-1,true);
    }

    v1 x,y;
    for(i=1;i<=n;i++)
    {
        if(a[i])
           x.push_back(i);
        if(b[i])
            y.push_back(i);
        //cout<<i<<" "<<a[i]<<" "<<b[i]<<endl;
    }
    if(flag)
    {
        cout<<-1<<endl;
        return 0;
    }

    cout<<x.size()<<endl;
    for(i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl<<y.size()<<endl;
    for(i=0;i<y.size();i++)
    {
        cout<<y[i]<<" ";
    }

}

