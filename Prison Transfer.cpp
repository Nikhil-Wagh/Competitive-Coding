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
    LL i,j,n,ans=0,a[200009]={0},b[200009],d=0,sum=0,c,t;
    cin>>n>>t>>c;
    clock_t tStart = clock();
    /* Do your stuff here */
    b[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>t)
            d++;
        else
            d=0;
        if(d>=c)
        {
            sum++;
        }
    }
    cout<<sum;
   printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}


