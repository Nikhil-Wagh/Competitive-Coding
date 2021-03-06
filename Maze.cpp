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
string s[1000];
LL visited[600][600],k,ans=0,n,m;
void start(LL &i,LL &j)
{

}
void dfs(LL i,LL j)
{
    if(s[i+1][j]!='.'&&s[i-1][j]!='.'&&s[i][j+1]!='.'&&s[i][j-1]!='.')
        return;
    if(ans>=k)
        return;
    if(i<0||i>=n||j<0||j>=m)
        return;
    s[i][j]='X';
    ans++;
    cout<<i<<" "<<j<<" "<<ans<<endl;
    if(i!=0&&s[i-1][j]=='.'&&(!visited[i-1][j]))
     {
        visited[i-1][j]=1;
        dfs(i-1,j);
     }
    if(i!=n-1&&s[i+1][j]=='.'&&(!visited[i+1][j]))
    {
        visited[i+1][j]=1;
        dfs(i+1,j);
    }
    if(j!=0&&s[i][j-1]=='.'&&(!visited[i][j-1]))
    {
        visited[i][j-1]=1;
        dfs(i,j-1);
    }
    if(j!=m-1&&s[i][j+1]=='.'&&(!visited[i][j+1]))
    {
        visited[i][j+1]=1;
        dfs(i,j+1);
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,j;
    cin>>n>>m>>k;

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='.')
                dfs(i,j);
        }
    }
    for(i=0;i<n;i++)
        cout<<s[i];
}

