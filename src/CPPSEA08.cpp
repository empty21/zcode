//--===-- Created by Thieu Quan Ngoc on 10/6/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x, temp, count = 0;
    cin >> n >> x;
    while(n--) {
        cin >> temp;
        if(temp == x) count++;
    }
    if(count == 0) cout << -1 << endl;
    else cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}