#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
ll solve() {
    ll n, m, q;
    cin >> n >> m >> q;
 
    ll l, r;
    cin >> l >> r;
 
    ll d;
    cin >> d;
 
    if (d < l && d < r) {
        return min(l, r) - 1;
    } else if (d > l && d > r) {
        return n - max(l, r);
    } else {
        return min(abs(min(l, r) - (l+r)/2),  abs(max(l, r) - (l+r)/2));
    }
}
 
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        cout << solve() << endl;
    }
}
 