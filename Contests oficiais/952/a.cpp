#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
	int t;
 
	cin >> t;
 
	while (t--) {
		string a, b, aux;
 
		cin >> a >> b;
		aux = b;
		b[0] = a[0];
		a[0] = aux[0];
 
		cout << a << " " << b << "\n";
	}
}