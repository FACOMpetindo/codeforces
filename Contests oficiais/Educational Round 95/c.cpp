#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
unordered_map<int, ll> memo;
ll dp(const vector<int>& numeros, int i) {
    if (i >= numeros.size()) {
        return 0;
    }
 
    if (memo.find(i) != memo.end()) {
        return memo[i];
    }
    
    ll result = numeros[i] + min(min(dp(numeros, i+2), dp(numeros, i+3)), dp(numeros, i+1));
    memo[i] = result;
    return result;
}
 
ll solve() {
    int n; cin >> n;
    vector<int> numeros(n);
    memo.clear();
    
    for (int i = 0; i < n; i++) 
        cin >> numeros[i];
    
    return dp(numeros, 0);
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t; cin >> t;
 
    while (t--){
        cout << solve() << endl;
    }
}