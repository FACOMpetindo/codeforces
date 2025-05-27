#include <iostream>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int somap = 0, somai = 0;
 
        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
 
            if (d % 2 == 0) {
                somap += d;
                continue;
            }
            somai += d;
        }
 
        cout << (somap > somai ? "YES" : "NO") << "\n";
    }
 
}