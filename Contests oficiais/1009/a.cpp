#include <iostream>
#include <vector>
#include <cmath>
#define inf 10e8
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
 
        cin >> l >> r >> d >> u;
 
        if (l == r && r == d && d == u) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}