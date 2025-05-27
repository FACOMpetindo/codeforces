#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;
 
    int diff = n - m;
    int i = 0;
 
    while(r > 0 && i < diff){
        r--;
        i++;
    }
 
    while(l < 0 && i < diff){
        l++;
        i++;
    }
 
    cout << l << " " << r << endl;
}
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}