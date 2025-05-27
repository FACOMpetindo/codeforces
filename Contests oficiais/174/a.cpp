#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> numeros(n-2);
 
        for (int i = 0; i < n-2; i++) {
            cin >> numeros[i];
        }
 
        bool can = true;
        for (int i = 1; i < n-3; i++) {
            if ((i + 1 <= n - 3) && (i - 1 >= 0)) {
                if ((numeros[i-1] == 1) && (numeros[i+1] == 1) && (numeros[i] == 0)) {
                    can = false;
                }
            }
        }
 
        cout << (can ? "YES" : "NO") << "\n";
    }
}