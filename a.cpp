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
    LL i,j,n,ans=0,b,d=0,sum=0,x,y;
    cin>>n;
    bool flag=false;
    LL a[600][600];
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
            }
    }
    for(i=0,j=0;i<n;i++)
    {
        if(i!=x&&j!=y)
            d+=a[i][j];
        for(j=0;j<n;j++)
        {
            if(i!=x&&j!=y)
                sum+=a[i][j];
        }
        if(sum>0)
            break;
    }

    //printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}


