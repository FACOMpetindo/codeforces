#include <iostream>
#include <bits/stdc++.h>
#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long
 
using namespace std;
 
void count_sort(vector<int> &p, vector<int> &c) {
    int n = p.size();
    vector<int> cnt(n);
    for (auto x : c) {
        cnt[x]++;
    }
    vector<int> p_new(n);
    vector<int> pos(n);
    pos[0] = 0;
 
    for (int i = 1; i < n; i++) {
        pos[i] = pos[i - 1] + cnt[i - 1];
    }
 
    for (auto x : p) {
        int i = c[x];
        p_new[pos[i]] = x;
        pos[i]++;
    }
    p = p_new;
}
 
int find_first(const string &s, const vector<int> &p, const string &x) {
    int l = -1, r = p.size();
    while (r > l + 1) {
        int mid = (l + r) / 2;
        string sub = s.substr(p[mid], min((int)x.size(), (int)s.size() - p[mid]));
        if (sub >= x) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}
 
int find_last(const string &s, const vector<int> &p, const string &x) {
    int l = -1, r = p.size();
    while (r > l + 1) {
        int mid = (l + r) / 2;
        string sub = s.substr(p[mid], min((int)x.size(), (int)s.size() - p[mid]));
        if (sub <= x) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return r;
}
 
void solve() {
    string s; cin >> s;
    s += "$";
    int n = s.size();
 
    vector<int> p(n), c(n);
 
    {
        vector<pair<char, int>> a(n);
        for (int i = 0; i < n; i++) 
            a[i] = {s[i], i};
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) 
            p[i] = a[i].second;
        c[p[0]] = 0;
        for (int i = 1; i < n; i++) {
            c[p[i]] = (a[i].first == a[i-1].first) ? c[p[i-1]] : c[p[i-1]] + 1;
        }
    }
 
    int k = 0;
    while ((1 << k) < n) {
        for (int i = 0; i < n; i++) 
            p[i] = (p[i] - (1 << k) + n) % n;
        count_sort(p, c);
        vector<int> c_new(n);
        c_new[p[0]] = 0;
        for (int i = 1; i < n; i++) {
            pair<int, int> prev = {c[p[i-1]], c[(p[i-1] + (1 << k)) % n]};
            pair<int, int> now = {c[p[i]], c[(p[i] + (1 << k)) % n]};
            c_new[p[i]] = (prev == now) ? c_new[p[i-1]] : c_new[p[i-1]] + 1;
        }
        c = c_new;
        k++;
    }
 
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        string x; cin >> x;
        int first = find_first(s, p, x);
        int last = find_last(s, p, x);
        if (first == -1) {
            cout << 0 << endl;
        } else {
            cout << last - first << endl;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t = 1; //cin >> t;
 
    while (t--){
        solve();
    }
}