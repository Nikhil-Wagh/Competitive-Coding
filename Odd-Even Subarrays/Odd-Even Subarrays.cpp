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
bool isOdd(LL n){
    return (n%2 == 1);
}
bool isEven(LL n){
    return (n%2 == 0);
}
LL n, arr[200009] = {0}, o[200009] = {0}, e[200009] = {0};
vector < LL > vo[200009], ve[200009];
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (LL i = 1 ; i <= n ; i++){
        cin >> arr[i];
        o[i] = o[i - 1];
        e[i] = e[i - 1];
        if(isOdd(arr[i])){
            o[i]++;
        }
        else
            e[i]++;
    }
    LL ans = 0;
    for (LL i = 1 ; i <= n ; i++){
        LL temp = o[i] - e[i];
        if(temp > 0){
            ve[temp].push_back(i);
        }
        else{
            temp *= -1;
            LL s = vo[temp].size() + 1;
            vo[temp].push_back(i);
        }
    }
    for(LL i = 0 ; i < n ; i++){
        LL temp = o[i] - e[i];
        if(temp > 0){
            LL s = upper_bound(ve[temp].begin(), ve[temp].end(), i) - ve[temp].begin();
            ans += ve[temp].size() - s;
        }
        else{
            temp *= -1;
            LL s = upper_bound(vo[temp].begin(), vo[temp].end(), i) - vo[temp].begin();
            ans += vo[temp].size() - s;
        }
        //cout << i << " " << ans << endl;
    }
    cout << ans << endl;
	return 0;
}

