#include <iostream>
 
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
 
		int par = k-1;
 
		int resp = 0;
 
		while (n >= k) {
			if (n % 2 == 0) {
				resp += n / par;
				n %= par;
			} else {
				resp += 1;
				n -= k;
			}
		}
 
		if (n != 0) {
			resp += 1;
		}
 
		cout << resp << "\n";
	}
 
 
	return 0;
}