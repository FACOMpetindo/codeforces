#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e18
#define endl "\n"
#define ll long long
 
using namespace std;
 
 
ll solve() {
	int a, b, c, d, e, f, g, h;
	cin >> a >> b;
	cin >> c >> d;
	cin >> e >> f;
	cin >> g >> h;
 
	if (a == c)
		return abs(d - b) * abs(d - b);
	else if (a == e)
		return abs(f - b) * abs(f - b);
	else
		return abs(h - b) * abs(h - b);
}
 
int main() {
    int t = 1; //cin >> t;
 
    while (t--) {
        cout << solve() << endl;
    }
}