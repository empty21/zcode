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
#include <algorithm>
using namespace std;

void solve() {
    vector<long> arr;
    int n, x, res = -1;
    long temp;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    for(auto e: arr) {
        if(e == x) res = 1;
        else if(e > x) break;
    }
    cout << res << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}