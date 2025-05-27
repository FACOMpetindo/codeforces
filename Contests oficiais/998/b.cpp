#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool compara(pair<int, int> p1, pair<int, int> p2) {
    return p1.first < p2.first;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        bool can = true;
        vector<pair<int, int>> pares(n);
        vector<int> numeros(m);
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int d;
                cin >> d;
                numeros[j] = d;
            }
 
            sort(numeros.begin(), numeros.end());
            pair<int, int> par = {numeros[0], i+1};
            pares[i] = par;
 
            for (int k = 1; k < m; k++) {
                if (numeros[k] - numeros[k-1] != n)
                    can = false;
            }
        }
 
        sort(pares.begin(), pares.end(), compara);
 
        if (can) {
            for (int i = 0; i < n-1; i++) {
                cout << pares[i].second << " ";
            }
            cout << pares[n-1].second << "\n";
        } else {
            cout << "-1" << "\n";
        }
    }
 
}