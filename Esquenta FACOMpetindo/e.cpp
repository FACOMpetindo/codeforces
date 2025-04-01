#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
 
        bool can = true; int index = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % a[0] != 0) {
                if (index > 0) {
                    if (a[i] % a[index] != 0) {
                        can = false;
                        break;
                    }
                } else {
                    index = i;
                }
            }   
        }
 
        if (can) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}