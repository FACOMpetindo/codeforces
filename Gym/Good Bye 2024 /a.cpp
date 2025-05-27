#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
            
    while (t--) {
        int n;
        cin >> n;
 
        int num[n];
        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
            num[i] = d;
        }
 
        bool can = false;
        for (int i = 0; i < n-1; i++) {
            if (num[i] + num[i+1] > num[i] && num[i] + num[i+1] > num[i+1] && num[i] * 2 > num[i+1] && num[i+1] * 2 > num[i]) {
                can = true;
                break;
            }
        }
 
        cout << (can ? "YES" : "NO") << "\n";
    }
 
}