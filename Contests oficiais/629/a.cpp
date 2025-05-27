#include <iostream>

    using namespace std;

    int main() {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int m, n;
            cin >> m >> n;
            int resp;

            if (m > n)
                resp = n - (m % n);
            else if (m < n)
                resp = n-m;
            else
                resp = 0;

            resp = (resp == n) ? 0 : resp;

            cout << resp << endl;
        }

        return 0;
    }
