#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	int quant = 0;
	string s;
	cin >> quant;
	int tam;
	for (int i = 0; i < quant; i++) {
		cin >> s;
		tam = s.size();

		char last = s[0];
		for (int j = 1; j < s.length(); j++) {
			if (s[j] == last) {
				tam = 1;
				break;
			}

			last = s[j];
		}
		cout << tam << "\n";
	}
}