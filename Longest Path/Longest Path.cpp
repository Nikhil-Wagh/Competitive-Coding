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
list <LL> tree[100009];
LL visited[100009], arr[100009];
LL ans = -1, k, in = 0;
void getLeave(LL x, LL d){
    if(ans < d){
        in = x;
        ans = d;
    }
    list <LL> :: iterator it;
    for(it = tree[x].begin() ; it != tree[x].end() ; it++){
        if(!visited[*it]){
            visited[*it] = 1;
            getLeave(*it, d + 1);
        }
    }
//    queue< pair <LL, LL> > q;
//    q.push(make_pair(x, 0));
//    visited[x] = 1;
//    while(!q.empty()){
//        pair<LL, LL> f;
//        f = q.front();
//        q.pop();
//        //cout << f.first << " " << f.second << endl;
//        if(ans < f.second){
//            ans = f.second;
//            in = f.first;
//        }
//        list <LL> :: iterator it;
//        for(it = tree[f.first].begin() ; it != tree[f.first].end() ; it++){
//            if(!visited[*it]){
//                visited[*it] = 1;
//                q.push(make_pair(*it, f.second + 1));
//            }
//        }
//    }
}
void solve(LL x, LL d, LL visited[]){
    if(arr[x] % k == 0){
        ans = max(ans, d);
        //cout << x << " " << ans << endl;
    }
    list <LL> :: iterator it;
    for(it = tree[x].begin() ; it != tree[x].end() ; it++){
        if(!visited[*it]){
            visited[*it] = 1;
            solve(*it, (arr[x] % k == 0) ? d + 1 : 0, visited);
        }
    }

//    queue <pair <LL , LL > > q;
//    q.push(make_pair(x, 0));
//    visited[x] = 1;
//    while(!q.empty()){
//        pair<LL, LL> f;
//        f = q.front();
//        q.pop();
//        if(arr[f.first] % k == 0)
//            ans = max(ans, f.second);
//        list <LL> :: iterator it;
//        for(it = tree[f.first].begin() ; it != tree[f.first].end() ; it++){
//            if(!visited[*it]){
//                visited[*it] = 1;
//                q.push(make_pair(*it, (arr[f.first] % k == 0) ? f.second + 1 : 0));
//            }
//        }
//    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    LL n;
    cin >> n >> k;
    for(LL i = 1 ; i <= n ; i++)
        cin >> arr[i];
    for (LL i = 1 ; i < n ; i++)
    {
        LL u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    //cout << endl;
    visited[1] = 1;
    getLeave(1, 0); //cout << in << " " << ans << endl;
    ans = -1;
    LL visited[100009] = {0};
    visited[in] = 1;
    solve(in, 0, visited);
    cout << max(LL(0), ans) << endl;
	return 0;
}


/*
10 5
15 5 15 10 0 20 25 5 20 8
1 2
1 8
8 10
2 3
2 4
2 5
3 9
4 6
4 7


5 3
1 3 3 3 1
1 3
2 3
4 3
5 3

1

8 3
2 3 3 3 3 3 3 3
1 3
2 3
4 3
5 3
2 6
6 7
7 8



7 3
2 2 2 3 3 3 2
1 2
2 3
3 4
4 5
5 6
6 7



*/
