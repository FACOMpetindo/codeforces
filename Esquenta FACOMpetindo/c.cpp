#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, soma = 0;
    cin >> n;
    vector<int> numeros(n);
 
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        numeros[i] = d;
        soma += d;
    }
 
    if ((float)soma / n >= 4.5) {
        cout << 0 << "\n";
        return 0;
    }
 
    sort(numeros.begin(), numeros.end());
 
    int resp = 0;
    for (int i = 0; i < n; i++) {
        soma += (5 - numeros[i]);
        numeros[i] = 5;
        resp += 1;
 
        if ((float)soma / n >= 4.5) {
            cout << resp << "\n";
            return 0;
        }
    }
 
}