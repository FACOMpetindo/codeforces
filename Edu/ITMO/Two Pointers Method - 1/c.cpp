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
 
    int l = 0;
 
    ll ans = 0, eq = 0;
    for (int i = 0; i < m; i++) {
        if (i > 0 && digitos[i] != digitos[i-1]) {
            eq = 0;
        }
 
        while (l < n && numeros[l] <= digitos[i]) {
            if (numeros[l] == digitos[i]) {
                eq++;
            }
            l++;
        }  
        ans += eq;
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