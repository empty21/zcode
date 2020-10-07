//--===-- Created by Thieu Quan Ngoc on 9/28/20. --===--//
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
#define ll long long

void solve() {
    vector<ll> arr;
    ll n, x, temp, pos;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    if(x >= arr[0]) {
        pos = x - arr[0] + 1;
    } else {
        pos = n - arr[0] + x + 1;
    }
    cout << pos << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}