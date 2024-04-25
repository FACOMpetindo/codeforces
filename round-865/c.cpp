#include <iostream>
#include <cmath>

using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;

        long long int v[n];
        for (long long int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (n % 2) {
            yes;
            continue;
        }

        for (long long int j = 1; j < n - 1; j++) {
            v[j + 1] -= (v[j] - v[j-1]);
            v[j] = v[j-1];
        }

        if (v[n-1] >= v[n-2])
            yes;
        else
            no;
    }
    return 0;
}
