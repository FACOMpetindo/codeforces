#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        char primeiro;
        primeiro = s[0];
        int grupos = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) {
                grupos += 1;
            }
        }
 
        cout << (primeiro == '1' ? grupos + 1 : grupos) << "\n";
    }
 
}