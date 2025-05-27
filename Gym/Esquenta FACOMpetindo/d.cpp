#include <iostream>
 
using namespace std;
 
int main() {
    int n, soma = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma += i + j;
        }
    }
 
}

