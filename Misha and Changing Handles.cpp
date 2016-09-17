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
LL ma=-1,mi=1000000000000000,cnt=0;
inline LL gcd(LL a, LL b) {return b?gcd(b, a%b):a;}
inline LL lcm(LL a, LL b, LL MOD) {return a/gcd(a,b) * b % MOD;}
map <string ,string> m;
string dsu(string a)
{
    map <string , string> :: iterator it;
    it = m.find(a);
    if(it!=m.end())
    {
        a=it->second;
        m.erase(it);
        dsu(a);
    }
    return a;
}
int main()
{
    LL i,j,n,ans=0,d=0,sum=0;
    cin>>n;
    clock_t tStart = clock();
    /* Do your stuff here */
    string a,b;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        m[a]=b;
    }
    for(map <string ,string> :: iterator it= m.begin();it!=m.end();it++)
    {
        it->second=(dsu(it->second));
    }
    cout<<m.size()<<endl;
    for(map <string ,string> :: iterator it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
   printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}

