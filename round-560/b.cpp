#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;

    int days[n];
    for (int i = 0; i < n; i++) {
        cin >> days[i];
    }

    sort(days, days+n);

    int ans = 0;
    int day = 1;

    for (int j = 0; j < n; j++) {
        if (days[j] >= day) {
            day += 1;
            ans += 1;
        }
    }

    cout << ans;

    return 0;
}
