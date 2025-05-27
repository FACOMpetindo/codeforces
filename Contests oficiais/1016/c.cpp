#include <iostream>
using namespace std;
 
bool isPrime(long long n) {
    if (n < 2)
        return false;
    for (long long i = 2; i*i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long x;
        int k;
        cin >> x >> k;
        
        if (k == 1) {
            cout << (isPrime(x) ? "YES" : "NO") << "\n";
        } else {
            if (x == 1 && k == 2) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }
    
    return 0;
}