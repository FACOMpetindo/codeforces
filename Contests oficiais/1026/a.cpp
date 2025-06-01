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
    int n;
    cin >> n;

    vector<int> numeros(n);
    FOR(i, n) {
        cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());

    int l = 0, r = n - 1;

    if ((numeros[l] + numeros[r]) % 2 == 0) {
        cout << 0 << endl;
        return;
    }

    int left = n, right = n;
    for (int i = 1; i < n; i++) {
        if (numeros[i] % 2 != numeros[0] % 2) {
            left = i;
            break;
        }
    }
    for (int i = 1; i < n; i++) {
        if (numeros[n - i - 1] % 2 != numeros[n - 1] % 2) {
            right = i;
            break;
        }
    }
    cout << min(left, right) << endl;
} 

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}