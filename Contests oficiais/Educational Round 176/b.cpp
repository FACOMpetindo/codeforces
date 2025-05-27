#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
bool compara (int a, int b) {
    return a > b;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> numeros(n);
        for (int i = 0; i < n; i++) {
            int d; cin >> d;
            numeros[i] = d;
        }
 
        long long int soma = 0;
        if (k != 1) {
            sort(numeros.begin(), numeros.end(), compara);
 
            for (int i = 0; i < k+1; i++) {
                soma += numeros[i];
            }
        } else {
            int last = max(numeros[0], numeros[n-1]);
            
            sort(numeros.begin(), numeros.end(), compara);
 
            soma = last + numeros[0];
            if (last == numeros[0])
                soma = last + numeros[1];
        }
 
        cout << soma << "\n";
    }
 
}