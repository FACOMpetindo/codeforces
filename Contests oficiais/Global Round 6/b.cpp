#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long int n;
        cin >> n;
        if( n >= 15 and n%14 >= 1 and n%14 <= 6){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
 
 
    }
}