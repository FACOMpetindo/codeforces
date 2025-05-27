#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
 
void solve() {
    ll n, q, soma = 0;
    cin >> n >> q;
    
    vector<ll> numeros(n);
    vector<ll> lastFirstQuery(n, 0);
    for (ll i = 0; i < n; i++) {
        ll d; cin >> d;
        numeros[i] = d;
        soma += d;
    }
    
    ll cnt = 0, lastSecondQuery = 0, lastSecondValue;
    for (ll i = 0; i < q; i++) {
        cnt++;
        ll type; cin >> type;
        
        if (type == 1) {
            ll j, x;
            cin >> j >> x;
            
            soma -= (lastFirstQuery[j-1] >= lastSecondQuery ? numeros[j-1] : lastSecondValue) - x;
            numeros[j-1] = x;
            lastFirstQuery[j-1] = cnt;
        } else {
            ll x;
            cin >> x;
            
            soma = x * n;
            lastSecondQuery = cnt;
            lastSecondValue = x;
        }
        
        cout << soma << endl;
    }
}
 
 
int main() {
    int t = 1; //cin >> t;
 
    while (t--) {
        solve();
    }
}