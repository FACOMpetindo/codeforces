#include <iostream>

using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0 && n > 2)
        yes;
    else
        no;


    return 0;
}
