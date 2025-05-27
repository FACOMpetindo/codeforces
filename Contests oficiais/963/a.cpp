#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
int solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    map<char, int> memo;
 
    for (int i = 0; i < s.size(); i++) {
        memo[s[i]]++;
    }
 
    int ans = 0;
 
    if (memo['A'] >= 1) {
        if (memo['A'] - n >= 0 && memo['?'] >= memo['A'] - n) {
            memo['?'] -= memo['A'] - n;
            memo['A'] += memo['A'] - n;
        }
        ans += (memo['A'] >= n ? n : memo['A']);
    }
 
    if (memo['B'] >= 1) {
        if (memo['B'] - n >= 0 && memo['?'] >= memo['B'] - n) {
            memo['?'] -= memo['B'] - n;
            memo['B'] += memo['B'] - n;
        }
        ans += (memo['B'] >= n ? n : memo['B']);
    }
 
    if (memo['C'] >= 1) {
        if (memo['C'] - n >= 0 && memo['?'] >= memo['C'] - n) {
            memo['?'] -= memo['C'] - n;
            memo['C'] += memo['C'] - n;
        }
        ans += (memo['C'] >= n ? n : memo['C']);
    }
 
    if (memo['D'] >= 1) {
        if (memo['D'] - n >= 0 && memo['?'] >= memo['D'] - n) {
            memo['?'] -= memo['D'] - n;
            memo['D'] += memo['D'] - n;
        }
        ans += (memo['D'] >= n ? n : memo['D']);
    }
 
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t; cin >> t;
 
    while (t--){
        cout << solve() << endl;
    }
}