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
        int d; cin >> d;
 
        cout << (d % 2 != 0 ? "YES" : "NO") << endl;
    }
}