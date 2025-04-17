#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int a[n];
 
        for (int i = 0; i < n; i++) 
            cin >> a[i];
 
        int pre[n];
        pre[0] = a[0];
 
        for (int i = 1; i < n; i++)
            pre[i] = pre[i-1] + a[i];
 
        int ans = n;
 
        for (int i = 0; i < n; i++) {
            int sum = pre[i];
            sum += sum;
 
            int curr = (i+1), last = i;
            int idx;
 
            while (binary_search(pre, pre+n, sum)) {
                idx = lower_bound(pre, pre+n, sum)-pre;
                sum += pre[i];
                curr = max(curr, idx-last);
                last = idx;
            
                if (last == (n-1))
                    ans = min(ans, curr);
            }
        }
 
        cout << ans << "\n";
    }
}