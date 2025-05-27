#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    int n; cin >> n;
 
    vector<ll> numeros(n);
 
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
 
    vector<ll> prefix(n+1);
    prefix[0] = numeros[0];
 
    for (int i = 0; i < n; i++) {
        prefix[i+1] = prefix[i] + numeros[i];
    } 
 
    sort(numeros.begin(), numeros.end());
    vector<ll> prefix_sort(n+1);    
    prefix_sort[0] = numeros[0];
 
    for (int i = 0; i < n; i++) {
        prefix_sort[i+1] = prefix_sort[i] + numeros[i];
    }
 
    int m; cin >> m;
 
    for (int i = 0; i < m; i++) {
        int t, l, r;
        cin >> t >> l >> r;
 
        if (t == 1) {
            cout << prefix[r] - prefix[l-1] << endl;
        } else {
            cout << prefix_sort[r] - prefix_sort[l-1] << endl;
        }
    }
}
 
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1; //cin >> t;
 
    while (t--) {
        solve();
    }
}