#include <iostream>
 
using namespace std;
 
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
 
	a -= c;
	b -= c;
 
	d -= a;
	d -= b;
	d -= c;
 
	if (a >= 0 && b >= 0 && d >= 1) {
		cout << d << "\n";
	} else {
		cout << -1 << "\n";
	}
 
}
