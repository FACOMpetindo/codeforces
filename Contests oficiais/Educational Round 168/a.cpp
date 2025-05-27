#include <bits/stdc++.h>
 
#define FOR(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second
 
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() { 
    string s; cin >> s;
    int tam = s.size();
 
    if (tam == 1) {
        char c = (s[0] + 1);
        if (c > 122) c = 'a';
        s += c;
    }
 
    for (int i = 1; i < tam; i++) {
        if (s[i] == s[i-1]) {
            char c = s[i] + 1;
            if (c > 122) c = 'a';
            s.insert(i, 1, c);
            break;
        }
    }
 
    if (s.size() == tam) {
        char c = (s[s.size()-1] + 1);
        if (c > 122) c = 'a';
        s += c;
    }
 
    cout << s << endl;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1; cin >> t;
 
    while (t--) {
        solve();
    }
}
