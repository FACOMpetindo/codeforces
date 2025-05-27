#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#define inf 10e9
#define endl "\n"
 
bool compara(int a, int b) {
    return a > b;
}
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        if (n % 2 != 0) {
            cout << "1" << " ";
 
            for (int i = n; i > 1; i--) {
                cout << i << (i == 2 ? endl : " ");
            }
        } else {
            cout << "-1" << endl;
        }
    }
}