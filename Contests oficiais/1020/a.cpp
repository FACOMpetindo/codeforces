#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0, ini = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ini++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ans += ini - 1;
        } else {
            ans += ini + 1;
        }
    }
    
    cout << ans << endl;
}
 
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}