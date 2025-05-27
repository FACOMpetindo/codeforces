#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	int quant = 0;
	string s;
	cin >> quant;
	for (int i = 0; i < quant; i++) {
		cin >> s;

		s.replace(s.size() - 2, 2, "i");

		cout << s << "\n";
	}
}