#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    string ans;
 
    for (int i = 0; i < 3; i++) {
        string s; cin >> s;
 
        ans += s[0];
    }
 
    cout << ans << endl;
}
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}