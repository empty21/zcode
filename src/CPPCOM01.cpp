//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long

string toBinary(ll x, int n) {
    string result;
    for(int i = 0; i < n; i++) {
        result += ((x%2) + '0');
        x /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}

void solve() {
    int n;
    cin >> n;
    for(ll i = 0; i < pow(2,n); i++) {
        cout << toBinary(i, n) << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}