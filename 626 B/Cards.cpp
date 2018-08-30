#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef long double ld;
#define maxx 10000000000
#define sz 100009
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
bool solve(LL i, LL arr[4]){
    LL a = arr[i];
    LL b = arr[(i+1)%3];
    LL c = arr[(i+2)%3];
    //cout << a << " " << b << " " << c << endl;
    if(a > 0){
        if((b == 0 && c == 1) || (c == 0 && b == 1)){
            return false;
        }
        return true;
    }
    else{
        if(b == 0 || c == 0)
            return false;
        return true;
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    LL n, arr[4] = {0};
    string a, b = "RGB";
    set <char> s;
    cin >> n;
    cin >> a;
    for(LL i = 0 ; i < n ; i++)
    {
        if(a[i] == 'R')
            arr[0]++;
        else if(a[i] == 'G')
            arr[1]++;
        else
            arr[2]++;
    }
    for(LL i = 0 ; i < b.length() ; i++)
    {
        if(solve(i, arr))
            s.insert(b[i]);
    }
    set <char> :: iterator it;
    for(it = s.begin() ; it != s.end() ; it++)
        cout << *it ;
    cout << endl;
	return 0;
}

