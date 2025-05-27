#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) {
        long long x, y, a;
        cin >> x >> y >> a;
        double treasure = a + 0.5;
        long long total_per_round = x + y;
 
        long long rounds = static_cast<long long>(treasure / total_per_round);
        
        double remaining = treasure - rounds * total_per_round;
        
        if (remaining <= x) 
            cout << "NO\n";
        else 
            cout << "YES\n";
    }
    return 0;
}