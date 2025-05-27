#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void solve() {
    ll n; cin >> n;
    string s; cin >> s;
 
    ll menor = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') {
            menor += 1;
        }
    }
 
    ll aux1 = menor, aux2 = menor + 2;
    cout << menor + 1 << " ";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') {
            cout << aux1 << (i == s.size() - 1 ? endl : " ");
            aux1--;
        } else {
            cout << aux2 << (i == s.size() - 1 ? endl : " ");
            aux2++;
        }
    }
}
 
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        solve();
    }
}