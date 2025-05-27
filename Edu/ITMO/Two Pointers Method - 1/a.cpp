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
    vector<int> digitos(m);
 
    FOR(i, n) {
        cin >> numeros[i];
    }
 
    FOR(i, m) {
        cin >> digitos[i];
    }
 
    int l = 0, r = 0;
 
    for (int i = 0; i < n + m; i++) {
        int ans = 0;
        if (r >= m || (l < n && numeros[l] <= digitos[r])) {
            ans = numeros[l];
            l++;
        } else {
            ans = digitos[r];
            r++;
        }
 
        cout << ans << (i == n + m - 1 ? endl : " ");
    }
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1; //cin >> t;
 
    while (t--) {
        solve();
    }
}