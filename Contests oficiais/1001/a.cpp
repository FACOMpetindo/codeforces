#include <iostream>
 
using namespace std;
 
int main() {
	int t;
 
	cin >> t;
 
	while (t--) {
		string texto;
		int resp = 0;
 
		cin >> texto;
 
		for (int i = 0; i < texto.size(); i++) {
			if (texto[i] == '1') {
				resp += 1;
			}
		}
 
		cout << resp << "\n";
	}
}
