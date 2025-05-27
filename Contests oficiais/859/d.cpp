#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> numeros(n);
        vector<int> soma(n);
 
        for (int i = 0; i < n; i++) {
            int d; cin >> d;
            numeros[i] = d;
 
            if (i == 0) {
                soma[i] = d;
            } else {
                soma[i] = d + soma[i-1];
            }
        }
 
        for (int i = 0; i < q; i++) {
            int l, r, k;
            cin >> l >> r >> k;
 
            int diff = soma[r-1] - (l-2 >= 0 ? soma[l-2] : 0);
            int final = soma[n-1];
            final -= diff;
            final += k * (r-l+1);
 
            cout << (final % 2 != 0 ? "YES" : "NO") << "\n";
        }
    }
 
}