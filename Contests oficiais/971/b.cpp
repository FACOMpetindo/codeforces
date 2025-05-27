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
    int n; cin >> n;
    vector<int> pos(n);
 
    FOR(i, n) {
        string s; cin >> s;
 
        FOR(j, s.size()) {
            if (s[j] == '#') {
                pos[i] = j+1;
                break;
            }
        }
    }
 
    for (auto it = pos.rbegin(); it != pos.rend(); ++it) {
        cout << *it << (it != pos.rend() - 1 ? " " : endl);
    }
 
 
}
 
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}