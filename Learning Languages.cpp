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
v1 a[110000],li[110000];
LL visited[110000];
void dsu(int i)
{
    visited[i]=1;

   for(int j=0;j<li[i].size();j++)
    if(!visited[li[i][j]])
        dsu(li[i][j]);
}
int main()
{
    LL i,j,n,b,d=0,sum=-1,m,count=0;
    clock_t tStart = clock();
    /* Do your stuff here */
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>d;
        if(d)
            count++;
        while(d--)
        {
            cin>>b;
            a[b].push_back(i);
            //cout<<a[b].size()<<endl;
        }
    }
    for(i=1;i<=m;i++)
    {
        int si=a[i].size()-1;
        //cout<<si<<" "<<i<<endl;
        for(j=0;j<si;j++)
        {
            //cout<<"ewsfes"<<endl;
            //cout<<a[i][j]<<" yo "<<a[i][j+1]<<endl;
            li[a[i][j]].push_back(a[i][j+1]);//cout<<"mishra mc"<<endl;
            li[a[i][j+1]].push_back(a[i][j]);
        }
        //cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            sum++;
            dsu(i);
        }
    }
    if(count)
        cout<<sum<<endl;
    else
        cout<<n<<endl;
  // printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}


