#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#define inf 1e9
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;       
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> numeros(n);
        for (int i = 0; i < n; i++) {
            cin >> numeros[i];
        }
 
        if (is_sorted(numeros.begin(), numeros.end())) {
            cout << n << " " << n << "\n";
            continue;
        }
 
        int bestL = 0, bestR = 0;
        int globalMin = 0;
        
        for (int l = 0; l < n; l++){
            int cur = 0;
            int localMin = 0;
            int localR = l;
            for (int r = l + 1; r < n; r++){
                if (numeros[r] > numeros[l])
                    cur += 1;
                else if (numeros[r] < numeros[l])
                    cur -= 1;
 
                if (cur < localMin){
                    localMin = cur;
                    localR = r;
                }
            }
 
            if (localMin < globalMin){
                globalMin = localMin;
                bestL = l;
                bestR = localR;
            }
        }
        
        cout << bestL + 1 << " " << bestR + 1 << "\n";
    }
 
}
