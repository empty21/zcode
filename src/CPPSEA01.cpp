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
    int n, x;
    long temp;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    auto i = find(arr.begin(), arr.end(), x);
    auto res = (i == arr.end()) ? -1 : i - arr.begin() + 1;
    cout << res << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}