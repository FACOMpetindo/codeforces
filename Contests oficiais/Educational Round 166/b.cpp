#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
ll solve(){
    ll n; cin >> n;
    
    vector<ll> numeros(n+1);
    vector<ll> numeros2(n+1);
 
    for (ll i = 0; i < n; i++) {
        cin >> numeros[i];
    }
 
    for (ll i = 0; i < n+1; i++) {
        cin >> numeros2[i];
    }
 
    ll ans = 0;
    ll ext = inf;
    for (ll i = 0; i < n; ++i) {
        ans += abs(numeros[i] - numeros2[i]);
        ext = min(ext, abs(numeros[i] - numeros2[n]));
        ext = min(ext, abs(numeros2[i] - numeros2[n]));
        if (min(numeros[i], numeros2[i]) <= numeros2[n] && numeros2[n] <= max(numeros[i], numeros2[i]))
            ext = 0;
    }  
 
    return ans + ext + 1;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t;cin >> t;
 
    while (t--){
        cout << solve() << endl;
    }
}