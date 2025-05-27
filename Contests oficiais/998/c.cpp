#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
bool compara(pair<int, int> p1, pair<int, int> p2) {
    return p1.first < p2.first;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        map<int, int> numeros;
 
        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
 
            auto it = numeros.find(d);
 
            if (it == numeros.end())
                numeros[d] = 0;
 
            numeros[d] += 1;
        }
 
        int resp = 0;
        for (auto it = numeros.begin(); it != numeros.end(); ++it) {
            auto it2 = numeros.find(k - it->first);
            if (it2 != numeros.end()) {
                resp += min(it->second, it2->second);
            }
        }
        resp /= 2;
 
        cout << resp << "\n";
    }
 
}