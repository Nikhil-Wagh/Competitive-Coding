#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef long double ld;
#define maxx 10000000000
typedef vector<LL> v1;
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
LL power(LL x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}
LL n;
LL bfs(LL x,list<LL> li[],LL dist[],LL visited[])
{
    memset(visited,0,100009);
    memset(dist,0,100009);
   visited[x]=1;
   queue <LL> q;
   q.push(x);
   list<LL> :: iterator it;
   LL temp=0;
   while(!q.empty())
   {

       for(it=li[q.front()].begin();it!=li[q.front()].end();it++)
       {
           if(visited[*it]==0)
           {
               visited[*it]=1;
               q.push(*it);
               dist[*it]=dist[q.front()]+1;
           }
       }
       q.pop();
   }
   for(LL i=0;i<n;i++)
   {
       if(dist[temp]<dist[i])
       temp=i;
   }
  // cout<<"Temp "<<temp<<endl;
   return temp;
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,t;
	cin>>t;
	while(t--)
    {
        LL x,y,ans;
        list<LL> a[100009];
        queue <LL> leaves;
        LL dist[100009]={0};
        LL visited[100009]={0};
        n=0;
        cin>>n;

        for(i=0;i<n-1;i++)
        {
            cin>>x>>y;

            a[x].pb(y);
            a[y].pb(x);
        }
       ans=0;
        bfs(bfs(0,a,dist,visited),a,dist,visited);
        for(i=0;i<n;i++)
            ans=max(ans,dist[i]);
         // cout<<ans<<endl;
        cout<<(ans+1)/2<<endl;
    }
}

