#include <iostream>
#include <algorithm>
#include <vector>
#define no cout << "NO" << "\n"
#define yes cout << "YES" << "\n"

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	int testes;
	cin >> testes;

	while (testes--) {
		int n; int a; int b;
		cin >> n >> a >> b;

		if ((a - b) % 2 == 0) {
			yes;
		} else {
			no;
		}
	}
}