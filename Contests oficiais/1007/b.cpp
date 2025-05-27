#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
bool quadradoPerfeito(long long int d) {
	return (ceil((double)sqrt(d)) == floor((double)sqrt(d)));
}
 
int main() {
	int t;
	cin >> t;
 
	while (t--) {
		int d;
		cin >> d;
 
		vector<int> numeros(d);
		for (int i = 0; i < d; i++) {
			numeros[i] = i+1;
		}
 
		bool can = true;
		long long int soma = 0;
		for (int i = 0; i < d; i++) {
			soma += numeros[i];
 
			if (quadradoPerfeito(soma)) {
				soma -= numeros[i];
				if (i+1 < d) {
					swap(numeros[i], numeros[i+1]);
					soma += numeros[i];
				} else {
					can = false;
				}
			}
		}
 
		if (can) {
			for (int i = 0; i < d; i++) {
				cout << numeros[i] << (i + 1 == d ? "\n" : " ");
			}
		} else {
			cout << "-1" << "\n";
		}
	}
}