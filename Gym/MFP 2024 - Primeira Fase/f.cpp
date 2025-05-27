#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e18
#define endl "\n"
#define ll long long
 
using namespace std;
 
int solve() {
	int n;
	cin >> n;
 
	return __builtin_popcount(n);
}
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	int t = 1; //cin >> t
 
	while (t--) {
		cout << solve() << endl;
	}
}