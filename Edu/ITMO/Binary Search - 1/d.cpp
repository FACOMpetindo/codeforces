#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
int right(const vector<int>& numeros, int n, int x) {
	int l = -1;
	int r = n;
	while (r > l + 1) {
		int m = (l+r)/2;
		if (numeros[m] > x) r = m;
		else l = m;
	}
	return r;
}
 
int left(const vector<int>& numeros, int n, int x) {
	int l = -1;
	int r = n;
	while (r > l + 1) {
		int m = (l+r)/2;
		if (numeros[m] >= x) r = m;
		else l = m;
	}
	return r;
}
 
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int n; cin >> n;
 
	vector<int> numeros(n);
 
	for (int i = 0; i < n; i++)
		cin >> numeros[i];
 
	sort(numeros.begin(), numeros.end());
 
	int t; cin >> t;
 
	while (t--) {
		int l, r;
		cin >> l >> r;
		cout << right(numeros, n, r) - left(numeros, n, l) << (t == 0 ? endl : " ");
	}
}