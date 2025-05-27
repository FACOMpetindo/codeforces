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
    int n; cin >> n;
 
    vector<int> numeros(n);
    FOR(i, n) {
        cin >> numeros[i];
    }
 
    int m; cin >> m;
 
    FOR(i, m) {
        string s; cin >> s;
 
        if (s.size() != n) {
            cout << "NO" << endl;
            continue;
        }
 
        map<char, int> mapa;
        map<int, char> mapa2;
 
        bool can = true;
        for (int j = 0; j < n; j++) {
            char c = s[j];
            auto search = mapa.find(c);
            auto search2 = mapa2.find(numeros[j]);
 
            if (search != mapa.end()) {
                if (numeros[j] != search->second) {
                    can = false;
                    break;
                }
            }
 
            if (search2 != mapa2.end()) {
                if (c != search2->second) {
                    can = false;
                    break;
                }
            }
 
            mapa[c] = numeros[j];
            mapa2[numeros[j]] = c;
        }
 
        if (can) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1; cin >> t;
 
    while (t--) {
        solve();
    }
}