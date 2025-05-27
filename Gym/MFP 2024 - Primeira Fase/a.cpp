#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e18
#define endl "\n"
#define ll long long
 
using namespace std;
 
bool f(vector<ll> numeros, ll g, long long m) {
	ll soma = 0;
 
	for (ll i = 0; i < numeros.size(); i++) {
		if (soma >= g - m/numeros[i]) return 1;
		soma += m / numeros[i];
	}
 
	return soma >= g;
}
 
 
ll solve() {
	ll n, g;
	cin >> n >> g;
 
	vector<ll> numeros(n);
 
	for (ll i = 0; i < n; i++)
		cin >> numeros[i];
 
	ll l = -1;
	ll r = MAX;
	while (r > l + 1) {
		ll m = (l+r)/2;
		if (f(numeros, g, m)) r = m;
		else l = m;
	}
 
	return r;
}
 
int main() {
    int t = 1; //cin >> t;
 
    while (t--) {
        cout << solve() << endl;
    }
}