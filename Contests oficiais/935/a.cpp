#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
int solve(){
    int i, e, u;
    cin >> i >> e >> u;
 
    int ans = i;
    ans += e / 3;
 
    if (e % 3 == 1) {
        if (u >= 2) {
            u -= 2;
            ans += 1;
        } else {
            return -1;
        }
    } else if (e % 3 == 2) {
        if (u >= 1) {
            u -= 1;
            ans += 1;
        } else {
            return -1;
        }
    }
 
    ans += (u % 3 != 0 ? u / 3 + 1 : u / 3);
    
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t;cin >> t;
 
    while (t--){
        cout << solve() << endl;
    }
}