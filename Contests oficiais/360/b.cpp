#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    string numero;
    cin >> numero;
 
    cout << numero;
    reverse(numero.begin(), numero.end());
    cout << numero << "\n";
}