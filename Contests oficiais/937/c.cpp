#include <iostream>
#include <vector>
#include <cmath>
#define inf 10e8
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, ampm;
        cin >> s;
 
        int h = (s[0] - '0') * 10 + (s[1] - '0');
 
        ampm = "AM";
 
        if (h >= 12) {
            h -= 12;
            ampm = "PM";
        }
 
        if (h == 0) {
            h = 12;
        }
 
        cout << (h < 10 ? "0" : "") << h << ":" << s[3] << s[4] << " " << ampm << "\n";
    }
}