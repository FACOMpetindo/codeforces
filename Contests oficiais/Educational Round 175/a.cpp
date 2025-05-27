#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        cout << n / 15 * 3 + (n % 15 < 3 ? n % 15 + 1 : 3) << "\n";
    }
}