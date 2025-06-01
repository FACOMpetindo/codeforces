#include <bits/stdc++.h>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second

#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long

using namespace std;

struct pilha {
    stack<ll> s;
    stack<ll> smin;
    stack<ll> smax;

    void push(ll x) {
        s.push(x);
        if (smin.empty() || x < smin.top()) {
            smin.push(x);
        } else {
            smin.push(smin.top());
        }
        if (smax.empty() || x > smax.top()) {
            smax.push(x);
        } else {
            smax.push(smax.top());
        }
    }

    ll pop() {
        ll topo = s.top();
        s.pop();
        smin.pop();
        smax.pop();
        return topo;
    }

    bool empty() {
        return s.empty();
    }

    ll min() {
        return smin.empty() ? LLONG_MAX : smin.top();
    }

    ll max() {
        return smax.empty() ? LLONG_MIN : smax.top();
    }
};

pilha s1, s2;
ll k;

void add(ll x) {
    s2.push(x);
}

void remove() {
    if (s1.empty()) {
        while (!s2.empty()) {
            s1.push(s2.pop());
        }
    }
    s1.pop();
}

bool good() {
    ll mn = min(s1.min(), s2.min());
    ll mx = max(s1.max(), s2.max());
    return mx - mn <= k;
}

void solve() {
    ll n;
    cin >> n >> k;

    vector<ll> numeros(n);
    FOR(i, n) {
        cin >> numeros[i];
    }

    ll l = 0, ans = 0;
    for (ll r = 0; r < n; r++) {
        add(numeros[r]);
        while (!good()) {
            remove();
            l++;
        }
        ans += r-l+1;
    }

    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1; //cin >> t;
 
    while (t--) {
        solve();
    }
}