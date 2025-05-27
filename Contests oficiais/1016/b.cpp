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
        string n; cin >> n;
 
        int index = 0;
        for (int i = n.length()-1; i >= 0; i--) {
            char c = n[i];
            if (c != '0' && index == 0)
                index = i;
        }
 
        int after = 0;
        int before = 0;
        for (int i = 0; i < n.length(); i++) {
            char c = n[i];
            if (index < i && c == '0') {
                before += 1;
            } else if (index > i && c == '0') {
                after += 1;
            }
        }
 
        cout << index + before - after << endl;
    }
}