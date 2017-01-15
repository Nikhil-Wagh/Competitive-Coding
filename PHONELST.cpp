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
class node{
public :
    class node *a[15];
    bool complete;
    node()
    {
        for(int i=0;i<15;i++)
        {
            a[i] = NULL;
        }
        complete = false;
    }
};
bool flag;
void add(node *root, string s)
{
    LL j;
    for(LL i=0;i<s.size();i++)
    {
        j=s[i]-'0';
        if(root->a[j]==NULL)
            {root->a[j]=new node();}
        root=root->a[j];
//        if(root->complete==true)
//            flag=true;
    }
    root->complete=true;
}
bool query(node *root,string s)
{
    for(LL i = 0;i<s.size();i++)
    {
        if(root->complete)
            return true;

        root=root->a[s[i]-'0'];
    }
    return false;
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,j,k,n,m,c=0,d=0,e[30]={0},x=0,t,temp=0,count;
    cin>>t;
    string s[10009];
    while(t--)
    {
        cin>>n;
        bool flag =  false;
        node *root = new node();
        //add(root,"0");
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            string temp = s[i];
            add(root,temp);
        }
//        if(flag)
//            cout<<"NO"<<endl;
//        else
//            cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            string temp = s[i];
            flag = query(root,temp);
            if(flag)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        free(root);
        if(!flag)
            cout<<"YES"<<endl;
    }
}

