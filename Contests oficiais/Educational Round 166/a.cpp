#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
ll solve(){
    int n; cin >> n;
    string s; cin >> s;
 
    char last;
    for (auto c : s) {
        if (last && last > c) {
            return 0;
        }
        last = c;
    }
 
    return 1;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t;cin >> t;
 
    while (t--){
        cout << (solve() == 1 ? "YES" : "NO") << endl;
    }
}