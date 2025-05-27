#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
ll solve(){
    ll a, b, m;
    cin >> a >> b >> m;
 
    ll ans = 2;
    ans += m / a;
    ans += m / b;
 
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t;cin >> t;
 
    while (t--){
        cout << solve() << endl;
    }
}