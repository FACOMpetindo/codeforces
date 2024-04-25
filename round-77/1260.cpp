#include <iostream>

using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        int maior = (a > b) ? a : b;
        int menor = (a < b) ? a : b;

        if ((a+b) % 3 == 0 && maior <= 2*menor)
            yes;
        else
            no;
    }
}
