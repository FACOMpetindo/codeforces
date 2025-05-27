#include <iostream>

    using namespace std;

    int main() {
        int n; cin >> n;

        long long int x;
        for (int i = 0; i < n; i++) {
        	cin >> x;
        	int r = x % 14;

        	if (r >= 1 && r <= 6 && x >= 15) {
        		cout << "YES" << endl;
        		continue;
        	}
        	cout << "NO" << endl;
        }
    }
