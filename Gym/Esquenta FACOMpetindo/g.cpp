#include <iostream>
#include <vector>
#define inf 1e9
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
 
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
 
        for (int i = 0; i < n; i++) 
            cin >> v[i];
 
        int sum = 0;
        int ans = inf;
        int l = 0, r = 0;
 
        while(r < n) {
            sum += v[r++];
 
            if (sum == s) {
                ans = min(ans, n - (r - l));
            }
 
            if (sum > s) sum -= v[l++];
        }
 
        if (ans == inf) ans = -1;
 
        cout << ans << '\n';
    }
}
