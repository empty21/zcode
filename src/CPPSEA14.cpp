//--===-- Created by Thieu Quan Ngoc on 10/7/20. --===--//
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
    set<ll> valid;
    ll n, temp, result = -1;
    cin >> n;
    while(n--) {
        cin >> temp;
        if(result == -1) {
            if(valid.count(temp)) {
                result = temp;
            } else {
                valid.insert(temp);
            }
        }
    }
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}