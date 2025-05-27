#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#define inf 10e9
#define endl "\n"
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
 
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;
 
        long long l = 0;
        long long r = m;
        while (l + 1 < r) {
        	long long mid = (l + r) / 2;
 
        	if ((n * (mid * (m / (mid+1)) + (m % (mid+1)))) >= k) {
        		r = mid;
        	} else {
        		l = mid;
        	}
        }
 
        cout << r << endl;
    }
}