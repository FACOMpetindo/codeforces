#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        map<char, int> m;
 
        string texto;
        cin >> texto;
 
        bool can;
        can = true;
 
        for (int i = 0; i < n; i++) {
            char c = texto[i];
            auto search = m.find(c);
 
            if (search != m.end()) {
                if ((search->second - i) % 2 != 0) {
                    can = false;
                    break;
                }
            }
            m[c] = i;
         }
 
         cout << (can ? "YES" : "NO") << "\n";
    }
 
}