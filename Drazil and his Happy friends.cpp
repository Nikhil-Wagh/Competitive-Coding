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
LL MOD =1000000009;
LL ma=-1,mi=1000000000000000;
inline LL gcd(LL a, LL b) {return b?gcd(b, a%b):a;}
inline LL lcm(LL a, LL b, LL MOD) {return a/gcd(a,b) * b % MOD;}
int main()
{
    LL i,j,n,ans=0,a[100009]={0},b,d=0,sum=0,m,g;
    LL x[110]={0},y[110]={0};
    //clock_t tStart = clock();
    /* Do your stuff here */
    cin>>n>>m;
    sum=n*m;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>d;
        x[d]++;
    }
    cin>>g;
    for(i=0;i<g;i++)
    {
        cin>>d;
        y[d]++;
    }
    for(i=0;i<sum*(max(m,n));i++)
    {
        if(i!=0&&(x[i%n]!=0)||(y[i%m]!=0))
      {
            x[i%n]++;
            y[i%m]++;
      }
      else if((x[i%n]!=0)||(y[i%m]!=0))
       {
            x[0]++;
            y[0]++;
       }
    }
    for(i=0;i<n;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    for(i=0;i<m;i++)
        cout<<y[i]<<" ";
    cout<<endl;
    for(i=0;i<max(n,m);i++)
    {
        if(x[i%n]==0||y[i%m]==0)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    //printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}

