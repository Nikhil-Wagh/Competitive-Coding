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
#define tr(c,i) for(typeof(c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define total(c) allocator(all(c),ll(0))
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
LL n, m, r[510][510] = {0}, c[510][510] = {0}, ri[510][510] = {0}, ci[510][510] = {0}, matrix[510][510] = {0};
void printMatrix(LL x[510][510]){
    for(LL i = 0 ; i < n ; i++){
        for (LL j = 0 ; j < m ; j++){
            cout << x[i][j] << " ";
        }
        cout << endl ;
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    string arr[510];
    cin >> n >> m;
    for(LL i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    n++;m++;
    for(LL i = 0 ; i < n ; i++){
        for (LL j = 1 ; j < m ; j++){
            if(arr[i][j] == '.' && arr[i][j-1] == '.'){
                r[i][j]++;
            }
            if(i > 0){
                r[i][j] += r[i-1][j];
            }
        }
    }
//    cout << "R" << endl;
//    printMatrix(r);
    for(LL i = 1 ; i < n ; i++){
        for (LL j = 0 ; j < m ; j++){
            if(arr[i][j] == '.' && arr[i-1][j] == '.'){
                c[i][j]++;
            }
            if(j > 0)
            c[i][j] += c[i][j - 1];
        }
    }
//    cout << "C" << endl;
//    printMatrix(c);
    for (LL j = 0 ; j < m ; j++){
        for (LL i = 1 ; i < n ; i++){
            if(arr[i][j] == '.' && arr[i-1][j] == '.'){
                ri[i][j]++;
            }
            ri[i][j] += ri[i-1][j];
        }
    }
//    cout << "RIN" << endl;
//    printMatrix(ri);
    for (LL i = 0 ; i < n ; i++){
        for (LL j = 1 ; j < m ; j++){
            if(arr[i][j] == '.' && arr[i][j-1] == '.'){
                ci[i][j]++;
            }
            ci[i][j] += ci[i][j-1];
        }
    }
//    cout << "CIN" << endl;
//    printMatrix(ci);
    for(LL i = 0 ; i < n ; i++){
        for (LL j = 0 ; j < m ; j++){
            if(i > 0 && j > 0){
                matrix[i][j] += matrix[i-1][j-1];
            }
            if(i > 0)
            matrix[i][j] += ri[i-1][j];
            if(j > 0)
            matrix[i][j] += ci[i][j-1];

            matrix[i][j] += r[i][j];
            matrix[i][j] += c[i][j];
        }
    }
//    cout << "ANS MAT" << endl;
//    printMatrix(matrix);
    LL q, r1, c1, r2, c2;
    cin >> q;
    while (q--){
        cin >> r1 >> c1 >> r2 >> c2;
        r1--; r2--; c1--; c2--;
        LL ans;
        ans = matrix[r2][c2] - matrix[r1][c2] - matrix[r2][c1] + matrix[r1][c1] + ci[r1][c2] - ci[r1][c1] + ri[r2][c1] - ri[r1][c1] ;
//        ans = matrix[r2][c2];
//        if(r1 > 0 && c1 > 0)
//            ans -= (matrix[r1-1][c2] + matrix[r2][c1-1]);
//        ans = ans - ri[r1][c1] - ci[r1][c1] - r[r2][c1] + r[r1][c1] - c[r1][c2] + c[r1][c1];
        cout << ans << endl;
    }
	return 0;
}


/*
3 8
....#..#
.#...#..
...##...

*/
