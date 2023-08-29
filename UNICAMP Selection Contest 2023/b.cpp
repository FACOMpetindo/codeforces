#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1, x2, y2, diff, diff2;
    cin >> x1 >> y1 >> x2 >> y2;

    diff = x2 - x1;
    if (diff < 0) {
        cout << 0;
    } else {
        diff2 = y1 - y2;
        if (diff2 <= 0) {
            cout << -1;
        } else {
            cout << diff / diff2 + 1;
        }
    }
}