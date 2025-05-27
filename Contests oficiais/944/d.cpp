#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    string s; cin >> s;
 
    ll blocks = 1, sub = 0;
    ll last = s[0];
    for (int i = 1; i < s.size(); i++) {
        if (last == '0' && s[i] == '1') 
            sub = 1;
 
        if (last != s[i])
            blocks += 1;
 
        last = s[i];
    }
 
    cout << (sub == 1 ? blocks - 1 : blocks) << endl;
}
 
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}