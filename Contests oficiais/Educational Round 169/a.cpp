#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> numeros(n);
 
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
 
    if (n == 2 && abs(numeros[0] - numeros[1]) >= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t; cin >> t;
 
    while (t--){
        solve();
    }
}