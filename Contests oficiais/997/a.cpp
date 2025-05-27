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
        int n, k;
        cin >> n >> k;
 
        int total = k * 4;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
 
            if (i == 0)
                continue;
 
           total += (k * 4) - ((k - x + k - y) * 2);
        }
 
        cout << total << "\n";
    }
 
}