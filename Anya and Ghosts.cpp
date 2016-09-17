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
    LL i,j,n,ans=0,a[100009]={0},b,d=0,sum=0,m,t,r,curr=0,x[100009]={0};
    //clock_t tStart = clock();
    /* Do your stuff here */
    cin>>m>>t>>r;
    for(i=0;i<m;i++)
    {
        cin>>b;
        a[b+300]++;
    }
    for(i=300;i<602;i++)
    {
        b=0;
       if(a[i]>0)
       {
           d=0;
           for(j=i-t;j<i;j++)
           {
               if(x[j]==1)
                d++;
           }
           for(j=i-1;j>=i-t;j--)
           {
               if(d+b>=r)
                break;
               else
                if(x[j]!=1)
               {
                   b++;
                   x[j]=1;
               }
           }
           if(d+b<r)
           {
               cout<<-1<<endl;
               return 0;
           }
           else
           {
               sum+=b;
           }
       }
    }
   /* for(j=297;j<=m;j++)
    {
        cout<<j<<" "<<x[j]<<endl;
    }*/
    cout<<sum<<endl;

  // printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}


