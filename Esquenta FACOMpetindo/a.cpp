#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    string pos;
    cin >> pos;
 
    if (pos == "h1" || pos == "h8" || pos == "a1" || pos == "a8") {
        cout << 3 << "\n";
    } else if (pos[0] == 'a' || pos[0] == 'h' || pos[1] == '1' || pos[1] == '8') {
        cout << 5 << "\n";
    } else {
        cout << 8 << "\n";
    }
}