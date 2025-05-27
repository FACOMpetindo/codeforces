#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        float x;
        cin >> n >> x;
 
        int soma = 0;
        for (int i = 0; i < n; i++) {
            int d; cin >> d;
            soma += d;
        }
 
        if ((float)soma / n == x) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
 
}