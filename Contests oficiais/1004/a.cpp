#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
            
    while (t--) {
        int a, b;
        cin >> a >> b;
 
        int diff = a + 1 - b;
 
        if (diff >= 0 && diff % 9 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
 
}