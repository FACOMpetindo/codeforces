#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
ll solve() {
    ll n, k;
    cin >> n >> k;
 
    vector<int> numeros(n);
    ll ans = 0, gold = 0;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
 
    for (int i = 0; i < n; i++) {
        if (numeros[i] == 0 && gold > 0) {
            ans += 1;
            gold -= 1;
        } else if (numeros[i] >= k) {
            gold += numeros[i];
        }
    }
 
    return ans;
}
 
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        cout << solve() << endl;
    }
}