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

	LL ed=0,er=0,pd=0,pr=0,n,i;
	string x;
    list <char > li;
    list <char > :: iterator it;
    cin>>n;
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(x[i]=='D')
        {
            ed++;
            li.pb('D');
        }
        else
        {
            er++;
            li.pb('R');
        }
    }
    it=li.begin();
//    for(;it!=li.end();it++)
//        cout<<*it<<endl;
    while(true)
    {
        if(*it=='D')
        {
            if(pr>0)
            {
                it=li.erase(it);
                pr--;
                ed--;
            }
            else
            {
                pd++;
                it++;
            }
        }
        else
        {
            if(pd>0)
            {
                it=li.erase(it);
                pd--;
                er--;
            }
            else
            {
                pr++;
                it++;
            }
        }
        //cout<<*it<<endl;
        if(it==li.end()&&(ed==0||er==0))
            break;
        if(it==li.end())
            it=li.begin();
    }
    if(ed)
        cout<<"D"<<endl;
    else
        cout<<"R"<<endl;

}

