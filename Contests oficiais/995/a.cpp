#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	int testes; int n;
	cin >> testes;

	while (testes--) {
		cin >> n;
		int ans = 0;

		vector<int> m(n);
		vector<int> s(n);

		for (int i = 0; i < n; i++) {
			cin >> m[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}

		for (int i = 0; i < n; i++) {
			if (i + 1 < n) {
				if (m[i] > s[i+1]) {
					ans += m[i] - s[i+1];
				} 
			} else {
				ans += m[i];
			}
		}

		cout << ans << "\n";
	}
}