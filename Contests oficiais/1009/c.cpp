#include <iostream>
#include <vector>
#include <cmath>
#include <vector>
#define inf 10e8
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
 
        long long esq = 0;
        long long dir = n;
        long long meio, ou;
 
        while (esq <= dir) {
            meio = esq + (dir - esq) / 2;
 
            ou = (n ^ meio);
            if (n + meio > ou  && n + ou > meio && meio + ou > n) {
                break;
            }
 
            if (n + meio > ou) {
                dir = meio - 1;
            } else {
                esq = meio + 1;
            }
        }
 
        if (n + meio > ou && n + ou > meio && meio + ou > n) {
            cout << meio << "\n";
        } else {
            cout << "-1" << "\n";
        }
 
 
 
    }
}