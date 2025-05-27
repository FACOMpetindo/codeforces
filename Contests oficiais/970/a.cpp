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
    int a, b;
 
    cin >> a >> b;
 
    if (b % 2 == 0 && a % 2 == 0) {
        cout << "YES" << endl;
    } else if (b % 2 == 0) {
        cout << "NO" << endl;
    } else {
        if (a >= 2 && (a - 2) % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}