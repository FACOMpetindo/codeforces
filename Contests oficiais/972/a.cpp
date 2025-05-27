#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    int n; cin >> n;
 
    string vowels = "aeiou";
    string result;
 
    if (n < 5) {
        result = vowels.substr(0, n);
    } else {
        vector<int> counts(5, 1);
        int total = 5;
 
        while (total < n) {
            int min_index = 0;
            for (int i = 1; i < 5; i++) {
                if (counts[i] < counts[min_index]) {
                    min_index = i;
                }
            }
            counts[min_index]++;
            total++;
        }
 
        for (int i = 0; i < 5; ++i) {
            result += string(counts[i], vowels[i]);
        }
    }
 
    cout << result << endl;
}
 
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}