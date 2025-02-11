#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;
	t *= 3;

	while (t--) {
		string latin;

		cin >> latin;

		if (latin.find("?") <= 2) {
			if (latin.find("A") > 2) {
				cout << "A" << "\n";
			} else if (latin.find("B") > 2) {
				cout << "B" << "\n";
			} else {
				cout << "C" << "\n";
			}
		}
	}
}