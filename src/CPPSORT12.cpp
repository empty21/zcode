//--===-- Created by Thieu Quan Ngoc on 9/28/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

void solve() {
    vector<ll> a, b;
    ll m, n, temp;
    cin >> m >> n;
    while (m--) {
        cin >> temp;
        a.push_back(temp);
    }
    while (n--) {
        cin >> temp;
        b.push_back(temp);
    }
    cout << (*max_element(a.begin(), a.end())) * (*min_element(b.begin(), b.end())) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}