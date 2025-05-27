#include <iostream>
#include <vector>
#include <cmath>
#include <vector>
#define inf 10e8
 
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
 
        if (n == 1) {
            cout << numeros[0] << "\n";
        } else {
            for (int i = 1; i < n; i++) {
                int novo = 0;
                novo += numeros[i] + numeros[i-1] - 1; 
                numeros[i] = novo;
            }
 
            cout << numeros[n-1] << "\n";
        }
 
 
    }
}