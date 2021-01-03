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
        if(x == temp) pos = i + 1;
        arr.push_back(temp);
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