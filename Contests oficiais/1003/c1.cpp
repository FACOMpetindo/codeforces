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
        cin >> n >> m; // m is always 1 by the problem statement.
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long b;
        cin >> b; // since m = 1, we have only one b value.
        
        // We'll use a DP approach.
        // dp0 = best (minimum) ending value if we did NOT flip the current element.
        // dp1 = best ending value if we DID flip the current element.
        const long long INF = 1LL << 60;
        long long dp0 = a[0];        // Not flipped at index 0.
        long long dp1 = b - a[0];      // Flipped at index 0.
        
        bool possible = true;
        for (int i = 1; i < n; i++){
            long long new_dp0 = INF, new_dp1 = INF;
            long long option0 = a[i];        // if we do NOT flip a[i]
            long long option1 = b - a[i];      // if we flip a[i]
            
            // If the previous state (without flip) is valid:
            if (dp0 != INF) {
                if (option0 >= dp0)
                    new_dp0 = min(new_dp0, option0);
                if (option1 >= dp0)
                    new_dp1 = min(new_dp1, option1);
            }
            
            // If the previous state (with flip) is valid:
            if (dp1 != INF) {
                if (option0 >= dp1)
                    new_dp0 = min(new_dp0, option0);
                if (option1 >= dp1)
                    new_dp1 = min(new_dp1, option1);
            }
            
            dp0 = new_dp0;
            dp1 = new_dp1;
            
            // If neither option is possible, then break early.
            if (dp0 == INF && dp1 == INF){
                possible = false;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}
