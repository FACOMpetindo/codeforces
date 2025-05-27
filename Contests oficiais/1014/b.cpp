#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <iomanip>
#define inf 10e9
#define endl "\n"
#define ll long long
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n; cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
 
        int cnt1 = 0, cnt2= 0;
 
        for (int i = 0; i < n; i++) {
            if (i & 1) {
                cnt2 += a[i] == '0';
                cnt1 += b[i] == '0';
            } else {
                cnt1 += a[i] == '0';
                cnt2 += b[i] == '0';
            }
        }
 
        cout << (cnt1 >= (n+1) / 2 && cnt2 >= n / 2 ? "YES" : "NO") << endl;
    }
}