#include <iostream>
#include <vector>
#define inf 10e8
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
 
        cout << (l == 1 == r ? 1 : r - l) << "\n";
    }
}