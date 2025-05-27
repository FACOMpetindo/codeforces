#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#define endl "\n"
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
 
    while (t--) {
        map<int, int> digitos = {
            {0, 0},
            {1, 0},
            {2, 0},
            {3, 0},
            {5, 0}
        };
 
        int n;
        cin >> n;
 
        int when = 0;
        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
 
            digitos[d] += 1;
 
            if (digitos.at(0) >= 3 && digitos.at(1) >= 1 && digitos.at(2) >= 2 && digitos.at(3) >= 1 && digitos.at(5) >= 1 && !when) {
                when = i+1;
            }
        }
 
        cout << when << endl; 
    }
}