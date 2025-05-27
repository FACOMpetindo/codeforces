#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<long long> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    
    // Sort the coordinates to find the median
    sort(x.begin(), x.end());
    
    // The optimal point is the median (leftmost for even n)
    cout << x[(n - 1) / 2] << "\n";
    
    return 0;
}