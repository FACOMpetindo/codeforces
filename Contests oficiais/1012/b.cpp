#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<vector<int>> matriz(n, vector<int> (m));
        vector<vector<int>> reach(n, vector<int> (m));
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                matriz[i][j] = c - '0';
                reach[i][j] = 0;
            }
        }
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!matriz[i][j]) break;
                reach[i][j] = 1;
            }
        }
 
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (!matriz[i][j]) break;
                reach[i][j] = 1;
            }
        }
 
        bool can = true;
        for (int i = 0; i < n && can; i++) {
            for (int j = 0; j < m; j++) {
                if (matriz[i][j] && !reach[i][j]) {
                    can = false;
                    break;
                }
            }
        }
 
        cout << (can ? "YES" : "NO") << "\n";
    }
 
 
}