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
LL a[1000009],b[1000009];
void z(LL a[],string s)
{
    LL l,r,i;
    l=0;r=0;
    for(i=0;i<s.length();i++)
    {
        if(i>r)
        {
            l=r=i;
            while(r<s.length()&&s[r]==s[r-l])
            {
                r++;
            }
            a[i]=r-l;
            r--;
        }
        else
        {
            if(a[i-l]+i<r+1)
            {
                a[i]=a[i-l];
            }
            else
            {
                l=i;
                while(r<s.length()&&s[r]==s[r-l])
                    r++;
                a[i]=r-l;
                r--;
            }
        }
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,j,k,l,r;
    string s,t;
    cin>>s;
    t=s;
    z(a,s);
//    for(i=0;i<s.length();i++)
//    {
//        cout<<a[i]<<" ";
//    }
    reverse(s.begin(),s.end());
    z(b,s);
//    cout<<endl;
//    for(i=0;i<s.length();i++)
//    {
//        cout<<b[i]<<" ";
//    }


    LL ans=0;
    for(i=0;i<s.length();i++)
    {
        ans=max(ans,min(a[i],s.length()-i-1));
    }

        LL temp;
        temp=-1;
        //cout<<ans<<endl;
        for(i=s.length()-ans;i<s.length();i++)
        {
            if((i+a[i])==s.length())
            {
                temp=s.length()-i;
                break;
            }
        }
       // cout<<temp<<endl;
        if(temp!=-1)
        {for(i=0;i<temp;i++)
            cout<<t[i];
        cout<<endl;}
        else
        cout<<"Just a legend"<<endl;

}




/*

aratartaratarartara

*/






