#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<long long> B(m);
        for (int j = 0; j < m; j++){
            cin >> B[j];
        }
        sort(B.begin(), B.end()); // sort b-values for binary search
        
        const long long INF = 1LL << 60;  // a large number (acts like infinity)
        long long prev = -INF;  // initialize prev to a very small number
        
        bool possible = true;
        for (int i = 0; i < n; i++){
            // Option 1: leave a[i] unchanged (if it is at least prev)
            long long candidate1 = INF;
            if (a[i] >= prev) {
                candidate1 = a[i];
            }
            
            // Option 2: try to transform a[i] using one of the b-values.
            // We need b_j such that b_j - a[i] >= prev, i.e., b_j >= prev + a[i].
            long long candidate2 = INF;
            long long needed = prev + a[i];
            auto it = std::lower_bound(B.begin(), B.end(), needed);
            if (it != B.end()){
                candidate2 = *it - a[i];
            }
            
            // Pick the smaller valid candidate.
            long long candidate = min(candidate1, candidate2);
            if (candidate == INF) {
                possible = false;
                break;
            }
            // Update prev to the chosen candidate for this index.
            prev = candidate;
        }
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
