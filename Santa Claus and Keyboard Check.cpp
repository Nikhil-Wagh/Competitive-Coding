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

int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,hash[30],printed[30]={0},k=0;
    string a,b;
    cin>>a>>b;
    memset(hash,-1,sizeof hash);
    for(i=0;a[i]!='\0';i++)
    {
        if(hash[a[i]-'a']==-1&&hash[b[i]-'a']==-1)
        {
            hash[a[i]-'a']=b[i]-'a';
            hash[b[i]-'a']=a[i]-'a';
            if(a[i]!=b[i])
                k++;
        }
        else if(hash[a[i]-'a']!=b[i]-'a'||hash[a[i]-'a']==-1||hash[b[i]-'a']==-1)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<k<<endl;
    for(i=0;i<26;i++)
    {
        if(!printed[i]&&hash[i]!=i)
        {
            cout<<char(i+'a')<<" "<<char(hash[i]+'a')<<endl;
            printed[i]=printed[hash[i]]=1;
        }
    }
}

