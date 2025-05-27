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
    ll n;
    cin >> n;
 
    vector<ll> numeros(n); 
    FOR(i, n-1) {
        cin >> numeros[i];
    }
 
    ll ans = 1000;
    cout << ans << " ";
    for (ll i = 0; i < n-1; i++) {
        ans += numeros[i];
        cout << ans << (i == n - 2 ? endl : " ");
    }
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}
