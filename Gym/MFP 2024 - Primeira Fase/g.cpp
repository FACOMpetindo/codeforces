#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e18
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
	int n; cin >> n;
	vector<int> times(2, 0);
 
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		char t; cin >> t;
		char _; cin >> _;
		char p; cin >> p;
 
		times[t - '0' - 1] += p - '0';
	}
	cout << times[0] << " x " << times[1] << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	int t = 1; //cin >> t
 
	while (t--) {
		solve();
	}
}