#include <bits/stdc++.h>
 
#define FOR(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second
 
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() { 
    ll a, b;
    cin >> a >> b;
 
    if (b % a == 0) {
        cout << b * (b/a) << endl;
    } else {
        cout << b * (a/gcd(a,b)) << endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1; cin >> t;
 
    while (t--) {
        solve();
    }
}