#include <iostream>
 
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
    	int d;
    	cin >> d;
 
    	cout << (d % 3 == 1 ? "YES" : "NO") << "\n";
    }
}