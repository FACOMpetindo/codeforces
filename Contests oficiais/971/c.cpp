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
    int x, y, k;
    cin >> x >> y >> k;
 
    int div_x = 2*((x+k-1)/k) - 1;
    int div_y = 2*((y+k-1)/k);
 
    if(div_x > div_y){
        cout << div_x << endl;
    } else {
        cout << div_y << endl;
    }
}
 
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}