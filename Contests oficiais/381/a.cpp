#include <iostream>
#include <algorithm>
#define inf 10e8
 
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int j, k, diff, ans = inf;
    for (int i = 0; i < m; i++) {
        cin >> j >> k;
 
        diff = k - j + 1;
 
        if (diff < ans)
            ans = diff;
    }
 
    cout << ans << "\n";
    int print = 0;
    for (int i = 0; i < n; i++) {
        cout << print << (i == n ? "\n" : " ");
 
        print += 1; 
        if (print == ans) 
            print = 0;        
    }
}