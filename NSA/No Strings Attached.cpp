#include<bits/stdc++.h>
using namespace std;
#define N 26
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int l[100009][26] = {0}, r[100009][26] = {0}, y = 0;
        for (int i = 1 ; i < s.length() ; i++) {
            int k = s.length() - i - 1;
            for (int j = 0 ; j < N ; j++) {
                l[i][j] = l[i - 1][j] + (s[i - 1] < (j + 'a'));
                r[k][j] = r[k + 1][j] + (s[k + 1] > (j + 'a'));
            }
            y += l[i][s[i] - 'a'];
        }

        int ans = y;
        for (int i = 0 ; i < s.length() ; i++) {
            for (int j = 0 ; j < N ; j++) {
                int temp;
                temp = y - (l[i][s[i] - 'a'] + r[i][s[i] - 'a']) + (l[i][j] + r[i][j]);
                ans = min (ans, temp + abs((s[i] - 'a') - j));
            }
        }
        cout << ans << endl;
    }
}
