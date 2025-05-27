#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    ll n, x, y;
 
    cin >> n;
    cin >> x >> y;
 
    cout << n / min(x, y) + (n % min(x, y) != 0 ? 1 : 0) << endl;
}
 
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}