#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#define inf 1e9
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t;
    cin >> t;       
    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
 
        vector<int> dash(n, 0);
        
        long long dash_count = 0;
        long long underscore_count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '-') dash_count++;
            if (s[i] == '_') underscore_count++;
 
        }
 
        long long left, right;
        left = (dash_count + 1) / 2;
        right = dash_count / 2;
 
        long long result = underscore_count * left * right;
 
        cout << result << "\n";
 
    }
 
}