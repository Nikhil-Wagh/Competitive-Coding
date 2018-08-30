#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll getSolution(map<ll,ll> containing, vector<ll> a) {
    ll solution = 1, div = 1, cnt = 0;
    for (int i = 0; i < a.size(); i++){
        if (i > 0) {
            if (a[i] == a[i - 1]) {
                cnt++;
                div *= (cnt + 1);
            }
            else {
                cnt = 0;
            }
            solution *= (containing[a[i]] - cnt);
        }
        else{
            solution *= containing[a[i]];
        }
    }
//    cout << "Solution " << solution << " " << div << endl;
    return solution/div;
}
int main() {
    ll n, x;
    cin >> n >> x;
    vector <ll> numbers;
    for (int i = 0 ; i < n ; i++)
    {
        ll input;
        cin >> input;
        numbers.push_back(input);
    }

    ll srt = sqrt(x);
    set<ll> factors;
    for (int i = 1; i <= srt; i++) {
        if ((x%i) == 0)
        {
            factors.insert(i);
            factors.insert(x/i);
        }
    }

    map<ll, ll> containing;
    for (int i = 0 ; i < n ; i++) {
        containing[numbers[i]]++;
    }

    set<vector<ll> > ans;
    map<ll,ll> :: iterator it, jt, tt;
    ll solution = 0;

//    for (it = containing.begin(); it != containing.end(); it++)
//        cout << it -> first << " " << it -> second << endl;
//    cout << endl;

    for (it = containing.begin(); it != containing.end(); it++) {
        tt = it;
        for (jt = ++tt ; jt != containing.end(); jt++) {
            ll ab = (it -> first) * (jt -> first);
            ll c = containing[x/ab];
            if (c > 0 && (x % ab == 0)){
                vector <ll> a;
                a.push_back(it -> first);
                a.push_back(jt -> first);
                a.push_back(x/ab);
                sort (a.begin(), a.end());
                if (ans.find(a) == ans.end()) {
                    ans.insert(a);
                    solution += getSolution(containing, a);

                    for(int i = 0 ; i < a.size(); i++)
                        cout << a[i] << " ";
                    cout << endl << solution << endl;
                }
            }
//            cout << it -> first << " " << jt -> first << " " << x/ab << " " << solution << endl;
        }
    }

    cout << solution << endl;

//    set <vector<ll> > :: iterator ait;
//    for (ait = ans.begin(); ait != ans.end(); ait++){
//        for (int i = 0 ; i < (*ait).size() ; i++) {
//            cout << (*ait)[i] << " ";
//        }
//        cout << endl;
//    }
}

/*

10 100
1 2 3 4 5 10 20 30 40 50

8 93
3 31 1 93 31 1 93 1
*/
