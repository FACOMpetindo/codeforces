#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> numeros(n);
        
        for (int i = 0; i < n; i++) {
            cin >> numeros[i];
        }
        
        sort(numeros.begin(), numeros.end());
        
        cout << numeros[n-1] - numeros[0] << endl;
    }
}