#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> numeros(n);
        vector<int> numeros2(n);
 
        set <int> num;
        for (int i = 0; i < n; i++) {
            int d; cin >> d;
            numeros[i] = d;
            num.insert(d);
        }
 
        set<int> num2;
        for (int i = 0; i < n; i++) {
            int d; cin >> d;
            numeros2[i] = d;
            num2.insert(d);
        }
 
        set<int> soma;
 
        for (int i = 0; i < n; i++) {
            soma.insert(numeros[i] + numeros2[i]);
        }
 
        cout << (soma.size() < 3 && (num.size() == 1 || num2.size() == 1) ? "NO" : "YES") << "\n";
    }
 
}