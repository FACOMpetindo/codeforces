#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    int n; cin >> n;
 
    vector<int> numeros(2*n);
    set<int> vistos;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int d; cin >> d;
            vistos.insert(d);
            numeros[i+j+1] = d;
        }
    }
 
    int max = 2 * n;
 
    while (vistos.contains(max)) {
        max--;
    }
    numeros[0] = max;
 
    for (int i = 0; i < 2 * n; i++) {
        cout << numeros[i] << (i == 2*n-1 ? endl : " ");
    }
}
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}