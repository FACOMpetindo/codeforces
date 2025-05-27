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
    ll n, m;
    cin >> n >> m;
 
    vector<int> numeros(n);
    ll max = 0;
    FOR(i, n) {
        ll d;
        cin >> d;
        if (d > max) 
            max = d;
        
        numeros[i] = d;
    }
 
    FOR(i, m) {
        char c;
        ll l, r;
        cin >> c >> l >> r;
 
        if (c == '-') {
            if (l <= max && r >= max) {
                max -= 1;
            }
        }
 
        if (c == '+') {
            if (l <= max && r >= max) {
                max += 1;
            }
        }
 
        cout << max << " ";
    }
 
    cout << endl;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}