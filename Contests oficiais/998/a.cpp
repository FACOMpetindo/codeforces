#include <iostream>
#include <map>
#include <cmath>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
            
    while (t--) {
        int num[4];
        for (int i = 0; i < 4; i++) {
            int d;
            cin >> d;
            num[i] = d;
        }
 
        if (num[0] + num[1] == num[2] - num[1] && num[2] - num[1] == num[3] - num[2]) {
            cout << "3" << "\n";
        } else if (num[0] + num[1] == num[2] - num[1] || num[3] - num[2] == num[2] - num[1] || num[0] + num[1] == num[3] - num[2]) {
            cout << "2" << "\n";
        } else {
            cout << "1" << "\n";
        }
 
 
 
    }
 
}