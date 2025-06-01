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
    ll n, s;
    cin >> n >> s;

    vector<ll> numeros(n);
    FOR(i, n) {
        cin >> numeros[i];
    }

    ll l = 0, x = 0, ans = 0;
    for (ll r = 0; r < n; r++) {
        x += numeros[r];
        while (x - numeros[l] >= s) {
            x -= numeros[l];    
            l++;
        }
        if (x >= s) ans += l+1;
    }

    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1; //cin >> t;
 
    while (t--) {
        solve();
    }
}