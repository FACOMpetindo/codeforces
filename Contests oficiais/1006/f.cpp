#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#define inf 1e9
 
using namespace std;
 
long long piramide(long long i, long long j, long long k) {
    if (j == i) 
        return k;
    else if (j == 1)
        return k;
    else if ((j-1 & ~(i-1)) == 0)
        return k;
    else 
        return 0;
 
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;       
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        for (long long i = 1; i < n+1; i++) {
            cout << piramide(n, i, k) << (i != n ? " " : "\n");
        }
    }
 
}
