#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <iomanip>
#define inf 10e9
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    ll n, m;
    cin >> n >> m;
 
    vector<ll> numeros(n), s(n+1);
 
    for (ll i = 0; i < n; i++) {
        cin >> numeros[i];
    }
 
    sort(numeros.begin(), numeros.end());
 
    for (ll i = 0; i < n; ++i) {
        s[i+1] = s[i] + numeros[i];
    }
 
    for (ll i = 0; i < m; i++) {
        ll x, y;
        cin >> x >> y;
 
        cout << s[n-x+y] - s[n-x] << endl;
    }
 
 
}
 
int main() {
    solve();
}