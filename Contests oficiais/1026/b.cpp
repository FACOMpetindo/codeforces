#include <bits/stdc++.h>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second

#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long

using namespace std;

void solve() {
    string s;
    cin >> s;

    int bal = 0;
    for (int i = 1; i < s.size()-1; i++) {
        if (s[i] == '(') {
            if (bal < 0) {
                cout << "YES" << endl;
                return;
            }
            bal++;
        }
        if (s[i] == ')') bal--;
    }

    cout << "NO" << endl;
} 

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}