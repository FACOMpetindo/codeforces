#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        bool can = true;
        for (int i = 0; i < n; i++) {
            int d; cin >> d;
 
            if (d - i*2 <= 0 || d - (n - (i+1)) * 2 <= 0) {
                can = false;
            }
        }
 
        cout << (can ? "YES" : "NO") << "\n";
    }
}