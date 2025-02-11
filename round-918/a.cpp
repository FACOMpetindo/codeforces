#include <iostream>

using namespace std;

int main() {
	int t, a, b, c, ans;

	cin >> t;

	while (t--) {
		cin >> a >> b >> c;

		ans = a^b^c;
		cout << ans << "\n";
	}
}