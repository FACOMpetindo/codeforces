#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
vector<int> numeros(MAX);
 
int bb(int n, int x) {
	int l = -1;
	int r = n;
	while (r > l + 1) {
		int m = (l+r)/2;
		if (numeros[m] >= x) r = m;
		else l = m;
	}
	return r+1;
}
 
void solve() {
	int n, k;
	cin >> n >> k;
 
	for (int i = 0; i < n; i++)
		cin >> numeros[i];
 
	for (int j = 0; j < k; j++) {
		int d; cin >> d;
		cout << bb(n, d) << endl;
	}
}
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	int t = 1; //cin >> t
 
	while (t--) {
		solve();
	}
}