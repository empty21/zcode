//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    vector<long> arr;
    int n, q;
    long temp;
    cin >> n >> q;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        long sum = 0;
        for(int i = l - 1; i < r; i++) {
            sum += arr.at(i);
        }
        cout << sum << endl;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}