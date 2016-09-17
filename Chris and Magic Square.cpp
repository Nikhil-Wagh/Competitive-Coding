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
int main()
{
    LL i,j,n,ans=0,a[509][509]={0},b,d=0,sum=0,x,y,h[509]={0},v[509]={0};
    cin>>n;
   // clock_t tStart = clock();
    /* Do your stuff here */
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
            {
                x=i;y=j;
            }
            v[j]+=a[i][j];
            h[i]+=a[i][j];
        }
    }
    if(x!=n-1)
    {
        d=h[x+1]-h[x];
    }
    else
    {
        d=h[x-1]-h[x];
    }
    if(h[x]!=v[y]||d<=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    a[x][y]=d;
    h[x]+=d;
    v[y]+=d;
    for(i=0;i<n-1;i++)
    {
        if(h[i]!=h[i+1])
            break;
    }
    if(i!=n-1)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=0;i<n-1;i++)
    {
        if(v[i]!=v[i+1])
            break;
    }
    if(i!=n-1)
    {
        cout<<-1<<endl;
        return 0;
    }
    sum=0;b=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i][i];
        b+=a[i][n-1-i];
    }
    if(sum!=b||sum!=h[0]||b!=h[0])
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<d<<endl;
  // printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}


