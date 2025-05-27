#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e18
#define endl "\n"
#define ll long long
 
using namespace std;
 
unordered_map<int, ll> memo;
 
ll dp(const vector<int>& numeros, int i, int parada) {
    if (i >= parada) {
        return numeros[i];
    }
    
    if (memo.find(i) != memo.end()) {
        return memo[i];
    }
    
    ll result = numeros[i] + max(dp(numeros, i*2, parada), dp(numeros, i*2+1, parada));
    memo[i] = result;
    return result;
}
 
ll solve() {
    int n; cin >> n;
    ll m = pow(2, n) - 1;
    vector<int> numeros(m+1);
    
    for (int i = 1; i < m+1; i++) {
        cin >> numeros[i];
    }
    
    ll parada = pow(2, n-1);
    return dp(numeros, 1, parada);
}
 
int main() {
	int t = 1; //cin >> t
 
	while (t--) {
		cout << solve() << endl;
	}
}