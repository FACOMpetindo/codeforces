#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> numeros(n);
 
        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
            numeros[i] = d;
        }
 
        for (int j = 0; j < n-1; j++) {
            int minN = min(numeros[j], numeros[j+1]);
            numeros[j] -= minN;
            numeros[j+1] -= minN;
        }
 
        cout << (is_sorted(numeros.begin(), numeros.end()) ? "YES" : "NO") << "\n";
    }
 
}