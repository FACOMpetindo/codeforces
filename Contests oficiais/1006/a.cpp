#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define inf 1e9
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;       
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
 
        if (abs(k) > n * p)  {
            cout << -1 << "\n";
        } else {
            cout << (k % p != 0 ? abs(k) / p + 1 : abs(k) / p) << "\n";
        }
 
 
    }
}