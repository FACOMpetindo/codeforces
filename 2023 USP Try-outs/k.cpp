#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 0, y = 0, resp;

    cin >> x;

    if (x % 3 == 0) {
        resp = x / 3;
        cout << resp << '\n';
    } else {
        resp = x / 3;
        cout << resp + 1 << '\n';
    }
}