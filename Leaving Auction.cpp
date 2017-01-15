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
vector <LL> bid[200009],temp;
map <LL,LL> mas;
void putback()
{
    LL size = temp.size();
    for(LL i = 0;i<size;i++)
    {
        mas[bid[temp[i]][bid[temp[i]].size()-1]]=temp[i];
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

    LL i,j,k,x,y,q,n,sec,ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        x--;
        bid[x].pb(y);
    }
    for(i=0;i<n;i++)
    {
        if(bid[i].size())
        mas[bid[i][bid[i].size()-1]] = i;
    }
    cin>>q;
    map <LL,LL> :: reverse_iterator rit,te;
    for(i=0;i<q;i++)
    {
        cin>>k;
        temp.clear();
        for(j=0;j<k;j++)
        {
            cin>>x;
            x--;
            if(bid[x].size())
            {
                temp.pb(x);
                LL b;
                b = bid[x][bid[x].size()-1];
                mas.erase(b);
            }
        }
//        map <LL,LL> ::iterator it =  mas.begin();
//        cout<<"======================"<<endl;
//        while(it!=mas.end())
//            {
//                cout<<it->first<<" ";
//                it++;
//            }
//        cout<<endl;
        if(mas.size() == 0)
        {
            cout<<"0 0"<<endl;
            putback();
            continue;
        }
//        cout<<"Size "<<mas.size()<<endl;
        te=rit=mas.rbegin();
        rit++;
        if(rit!=mas.rend())
        {//cout<<"DSFSD"<<endl;
            LL sec = rit->first;
            LL indm,indsm ;
            indm = te->second;
            indsm = rit->second;
            ans = upper_bound(bid[indm].begin(),bid[indm].end(),sec)-bid[indm].begin();
            cout<<te->second+1<<" "<<bid[indm][ans]<<endl;
            putback();
        }
        else
        {
            cout<<te->second+1<<" "<<bid[te->second][0]<<endl;
            putback();
        }
    }
}

