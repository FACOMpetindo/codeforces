#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#define inf 10e9
#define endl "\n"
 
bool compara(int a, int b) {
    return a > b;
}
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        vector<long long> estudantes(n);
 
        for (long long i = 0; i < n; i++) {
            cin >> estudantes[i];
        }
 
        sort(estudantes.begin(), estudantes.end(), compara);
 
        long long menor = inf;
        long long qtd = 1;
        long long ans = 0;
        for (long long i = 0; i < n; i++) {
            menor = min(menor, estudantes[i]);
            if (qtd * menor >= k) {
                menor = inf;
                qtd = 1;
                ans++;
            } else {
                qtd++;
            }
        }
        cout << ans << endl;
 
    }
}
