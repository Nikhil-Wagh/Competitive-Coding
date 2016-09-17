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
    LL i,j,n,ans=0,a[100009]={0},b,d=0,sum=0;
    string s;
    clock_t tStart = clock();
    /* Do your stuff here */
    cin>>s;
    j=s.length();
    for(i=0;i<j;i++)
    {
        if((s[i]-'0')%2==0)
        {
            ans++;
            if(s[i]<s[j-1])
            {
                swap(s[i],s[j-1]);
                 cout<<s<<endl;
                return 0;
            }
        }
    }
    if(ans==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
       for(i=j-1;i>=0;i--)
    {
        if((s[i]-'0')%2==0)
        {
            ans++;
            if(s[i]>s[j-1])
            {
                swap(s[i],s[j-1]);
                cout<<s<<endl;
                return 0;
            }
        }
    }
    }
   printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}
