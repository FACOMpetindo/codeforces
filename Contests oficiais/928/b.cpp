#include <iostream>
#include <vector>
#define inf 10e8
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        int soma = 0;
        bool square = true;
        for (int i = 0; i < n; i++) {
            int soma_temp = 0;
            string linha;
            cin >> linha;
 
            for (int j = 0; j < n; j++) {
                soma_temp += linha[j] - '0';
            }   
 
            if (soma != soma_temp && soma != 0 && soma_temp != 0) {
                square = false;
            }
            soma = soma_temp;
        }
 
        cout << (square ? "SQUARE" : "TRIANGLE") << "\n";
    }
}