//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
#include <iostream>

using namespace std;
#define ll long long

void solve() {
    ll n, countZero = 0, temp;
    cin >> n;
    for(ll i = 0; i < n; i++) {
        cin >> temp;
        if(temp == 0) {
            countZero++;
        } else {
            cout << temp << " ";
        }
    }
    for(int i = 0; i< countZero; i++) {
        cout << 0 << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}