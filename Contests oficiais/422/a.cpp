#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve(){
	int a, b; cin >> a >> b;
 	
 	int ans = min(a,b);
 	for (int i = min(a,b)-1; i > 0; i--)
 		ans *= i;
 
	cout << ans << endl;
 
 
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t = 1; //cin >> t;
 
    while (t--){
        solve();
    }
}