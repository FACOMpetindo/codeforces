#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int h, m;
    for (int i = 0; i < n; i++) {
        cin >> h >> m;

        int resp = 60 - m;
        h += 1;

        if (h != 24) {
            int r = 24 - h;
            resp += r * 60;
        }

        cout << resp << endl;

    }

    return 0;
}
