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
    ll n, k;
    cin >> n >> k;

    vector<ll> numeros(n);
    vector<int> possiveis(MAX, 0);
    FOR(i, n) {
        cin >> numeros[i];
    }

    set<int> unicos;
    ll l = 0, x = 0, ans = 0;
    for (ll r = 0; r < n; r++) {
        unicos.insert(numeros[r]);
        possiveis[numeros[r]-1] += 1;
        while (unicos.size() > k) {
            possiveis[numeros[l]-1] -= 1;
            if (possiveis[numeros[l]-1] == 0) unicos.erase(numeros[l]);
            l++;
        }
        ans += r-l+1;
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