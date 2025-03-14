#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
            
    while (t--) {
        int n, a, b, aux = 0;
        cin >> n >> a >> b;
 
        for (int i = 0; i < n; i++) {
            if (b == aux) {
                aux = 0;
            }
 
            cout << (char)('a' + aux);
            aux++;
        }
 
        cout << "\n";
    }
 
}