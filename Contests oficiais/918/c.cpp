#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int n;
		long long soma = 0;
		cin >> n;

		while (n--) {
			long long num;
			cin >> num;

			soma += num;
		}

		long long inicio = 0;
		long long fim = soma;
		long long meio;
		while (inicio <= fim) {
            meio = inicio + (fim-inicio) / 2;

            if (meio * meio == soma) {
                break;
            } else if (meio * meio > soma) {
                fim = meio - 1;
            } else {
                inicio = meio + 1;
            }
        }

        if (meio * meio == soma) {
        	cout << "YES" << "\n";
        } else {
        	cout << "NO" << "\n";
        }
    }
}