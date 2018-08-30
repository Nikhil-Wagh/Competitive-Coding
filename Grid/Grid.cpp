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
LL a[1009][1009], visited[1009][1009];
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    LL n, m, q;
    LL si, sj, di, dj;
    string s[1009];
    cin >> n >> m >> q;
    for(LL i = 0 ; i < n ; i++)
        for(LL j = 0 ; j < m ; j++)
        a[i][j] = -1;
    for(LL i = 0 ; i < n ; i++)
        cin >> s[i];
    queue < pair <LL, LL> > bfs;
    cin >> si >> sj;
    si--; sj--;
    a[si][sj] = 0;
    if(s[si][sj] != '*')
        bfs.push(make_pair(si, sj));
    visited[si][sj] = 1;
    while(!bfs.empty()){
        pair <LL, LL> fro = bfs.front(), temp;
        bfs.pop();
        LL d = a[fro.first][fro.second];
        //cout << fro.first << " " << fro.second << endl;
        if(fro.first + 1 < n && visited[fro.first + 1][fro.second] != 1 &&  s[fro.first + 1][fro.second] != '*'){
            temp.first = fro.first + 1;
            temp.second = fro.second;
            a[temp.first][temp.second] = d + 1;
            visited[temp.first][temp.second] = 1;
            bfs.push(temp);
        }
        if(fro.first - 1 >= 0 && visited[fro.first - 1][fro.second] != 1 && s[fro.first - 1][fro.second] != '*'){
            temp.first = fro.first - 1;
            temp.second = fro.second;
            a[temp.first][temp.second] = d + 1;
            visited[temp.first][temp.second] = 1;
            bfs.push(temp);
        }
        if(fro.second + 1 < m && visited[fro.first][fro.second + 1] != 1 && s[fro.first][fro.second + 1] != '*'){
            temp.first = fro.first;
            temp.second = fro.second + 1;
            a[temp.first][temp.second] = d + 1;
            visited[temp.first][temp.second] = 1;
            bfs.push(temp);
        }
        if(fro.second - 1 >= 0 && visited[fro.first][fro.second - 1] != 1 && s[fro.first][fro.second - 1] != '*'){
            temp.first = fro.first;
            temp.second = fro.second - 1;
            a[temp.first][temp.second] = d + 1;
            visited[temp.first][temp.second] = 1;
            bfs.push(temp);
        }
    }
//    for(LL i = 0; i < n ; i++)
//    {
//        for (LL j = 0 ; j < m ; j++)
//            cout << a[i][j] << " ";
//        cout << endl;
//    }
//    cout << endl << endl;
    while(q--){
        cin >> di >> dj;
        cout << a[di - 1][dj - 1] << endl;
    }
	return 0;
}



/*

5 5 100
o*ooo
o*o*o
o*o*o
o*o*o
ooo*o



5 5 100
ooooo
****o
*oo*o
*oo*o
*oooo

*/
