#include <iostream>
#include <vector>
#define inf 10e8
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
 
        cin >> a >> b >> c;
 
        if (a < b && b < c) {
            cout << "STAIR" << "\n";
        } else if (a < b && b > c) {
            cout << "PEAK" << "\n";
        } else {
            cout << "NONE" << "\n";
        }
    }